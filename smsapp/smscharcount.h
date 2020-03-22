/**
 * Copyright (C) 2020 Jiří Wolker <woljiri@gmail.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License or (at your option) version 3 or any later version
 * accepted by the membership of KDE e.V. (or its successor approved
 * by the membership of KDE e.V.), which shall act as a proxy
 * defined in Section 14 of version 3 of the license.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef CHARCOUNT_H
#define CHARCOUNT_H

class SmsCharCount {
public:
    /**
     * Number of octets in current message.
     */
    qint32 octets;
    
    /**
     * Bits per character (7, 8 or 16).
     */
    qint32 bitsPerChar;
    
    /**
     * Number of chars remaining in current SMS.
     */
    qint32 remaining;
    
    /**
     * Count of SMSes in concatenated SMS.
     */
    qint32 messages;
    
    SmsCharCount(){};
    ~SmsCharCount(){};
};

#endif // CHARCOUNT_H
