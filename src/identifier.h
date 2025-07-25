// SPDX-FileCopyrightText: 2023 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef IDENTIFIER_H
#define IDENTIFIER_H

#include <QString>
#include <QDBusUnixFileDescriptor>
#include <unistd.h>

struct IdentifyRet
{
    QString ApplicationId;
    QString InstanceId;
};

class Identifier
{
public:
    virtual ~Identifier() = default;
    virtual IdentifyRet Identify(const QDBusUnixFileDescriptor &pidfd) = 0;
};

#endif
