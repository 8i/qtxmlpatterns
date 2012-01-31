/****************************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/
**
** This file is part of the test suite module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include <QtTest/QtTest>
#include <QtCore/QDir>
#include <QtCore/QFileInfo>

#include "tst_suitetest.h"

/*!
 \internal
 \brief Test QXsdSchemaParser against W3C's XSD test suite.
 */
class tst_XmlPatternsSchemaTS : public tst_SuiteTest
{
    Q_OBJECT
public:
    tst_XmlPatternsSchemaTS();
protected:
    virtual void catalogPath(QString &write) const;
};

tst_XmlPatternsSchemaTS::tst_XmlPatternsSchemaTS()
    : tst_SuiteTest(tst_SuiteTest::XsdSuite)
{
}

void tst_XmlPatternsSchemaTS::catalogPath(QString &write) const
{
    const char testSuite[] = "TESTSUITE";
    const QString testSuitePath = QFINDTESTDATA(testSuite);
    if (!testSuitePath.isEmpty()) {
        const QString testDirectory = QFileInfo(testSuitePath).absolutePath();
        QVERIFY2(QDir::setCurrent(testDirectory), qPrintable(QStringLiteral("Could not chdir to ") + testDirectory));
        write = QLatin1String(testSuite) + QStringLiteral("/testSuites.xml");
    }
}

QTEST_MAIN(tst_XmlPatternsSchemaTS)

#include "tst_xmlpatternsschemats.moc"

// vim: et:ts=4:sw=4:sts=4
