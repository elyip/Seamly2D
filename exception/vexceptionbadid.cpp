/****************************************************************************
 **
 **  Copyright (C) 2013 Valentina project All Rights Reserved.
 **
 **  This file is part of Valentina.
 **
 **  Tox is free software: you can redistribute it and/or modify
 **  it under the terms of the GNU General Public License as published by
 **  the Free Software Foundation, either version 3 of the License, or
 **  (at your option) any later version.
 **
 **  Tox is distributed in the hope that it will be useful,
 **  but WITHOUT ANY WARRANTY; without even the implied warranty of
 **  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 **  GNU General Public License for more details.
 **
 **  You should have received a copy of the GNU General Public License
 **  along with Valentina.  If not, see <http://www.gnu.org/licenses/>.
 **
 ****************************************************************************/

#include "vexceptionbadid.h"

VExceptionBadId::VExceptionBadId(const QString &what, const qint64 &id):VException(what), id(id),
    key(QString()){
}

VExceptionBadId::VExceptionBadId(const QString &what, const QString &key):VException(what), id(0), key(key)
{
}

VExceptionBadId::VExceptionBadId(const VExceptionBadId &e):VException(e), id(e.BadId()), key(e.BadKey()){
}

QString VExceptionBadId::ErrorMessage() const{
    QString error;
    if(key.isEmpty()){
        error = QString("ExceptionBadId: %1, id = %2").arg(what).arg(id);
    } else {
        error = QString("ExceptionBadId: %1, id = %2").arg(what).arg(key);
    }
    return error;
}
