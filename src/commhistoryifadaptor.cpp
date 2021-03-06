/******************************************************************************
**
** This file is part of commhistory-daemon.
**
** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
** Contact: Reto Zingg <reto.zingg@nokia.com>
**
** This library is free software; you can redistribute it and/or modify it
** under the terms of the GNU Lesser General Public License version 2.1 as
** published by the Free Software Foundation.
**
** This library is distributed in the hope that it will be useful, but
** WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
** or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
** License for more details.
**
** You should have received a copy of the GNU Lesser General Public License
** along with this library; if not, write to the Free Software Foundation, Inc.,
** 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
**
******************************************************************************/

/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c CommHistoryIfAdaptor -a commhistoryifadaptor CommHistoryIf.xml
 *
 * qdbusxml2cpp is Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "commhistoryifadaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class CommHistoryIfAdaptor
 */

CommHistoryIfAdaptor::CommHistoryIfAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    if(!parent){
        qCritical() << "CommHistoryIfAdaptor - parent is null";
    }
    // constructor
    setAutoRelaySignals(true);
}

CommHistoryIfAdaptor::~CommHistoryIfAdaptor()
{
    // destructor
}

void CommHistoryIfAdaptor::activateNotification(int groupId, const QString &remoteActionString)
{
    // handle method call com.nokia.CommHistoryIf.activateNotification
    QMetaObject::invokeMethod(parent(),
                              "activateNotification",
                              Q_ARG(int, groupId),
                              Q_ARG(QString, remoteActionString));
}


void CommHistoryIfAdaptor::activateAuthorization(const QString& contactId,
                                                 const QString& accountPath,
                                                 const QString& filename,
                                                 const QString& message,
                                                 const QString& transactionId,
                                                 const QString& accountUniqueIdentifier)
{
    QMetaObject::invokeMethod(parent(),
                              "activateAuthorization",
                              Q_ARG(QString, contactId),
                              Q_ARG(QString, accountPath),
                              Q_ARG(QString, filename),
                              Q_ARG(QString, message),
                              Q_ARG(QString, transactionId),
                              Q_ARG(QString, accountUniqueIdentifier));
}
