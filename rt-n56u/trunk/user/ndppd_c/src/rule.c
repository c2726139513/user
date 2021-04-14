/*
 * This file is part of ndppd.
 *
 * Copyright (C) 2011-2019  Daniel Adolfsson <daniel@ashen.se>
 *
 * ndppd is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ndppd is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with ndppd.  If not, see <https://www.gnu.org/licenses/>.
 */
#include "ndppd.h"

nd_rule_t *nd_rule_create(nd_proxy_t *proxy)
{
    nd_rule_t *rule = ND_NEW(nd_rule_t);

    *rule = (nd_rule_t){ .proxy = proxy, .target = proxy->target };

    ND_LL_PREPEND(proxy->rules, rule, next);

    return rule;
}
