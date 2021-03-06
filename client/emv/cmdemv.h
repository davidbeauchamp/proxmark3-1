//-----------------------------------------------------------------------------
// Copyright (C) 2017 Merlok
// modified 2017 iceman
// This code is licensed to you under the terms of the GNU GPL, version 2 or,
// at your option, any later version. See the LICENSE.txt file for the text of
// the license.
//-----------------------------------------------------------------------------
// EMV commands
//-----------------------------------------------------------------------------

#ifndef CMDEMV_H__
#define CMDEMV_H__

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>
#include <ctype.h>
#include "proxmark3.h"
#include "ui.h"
#include "cmdparser.h"
#include "common.h"
#include "util.h"
#include "util_posix.h"
#include "cmdmain.h"
#include "emvcore.h"
#include "apduinfo.h"
#include "emv_roca.h"

int CmdEMV(const char *Cmd);

int CmdEMVSelect(const char *Cmd);
int CmdEMVSearch(const char *Cmd);
int CmdEMVPPSE(const char *Cmd);
int CmdEMVExec(const char *Cmd);
int CmdEMVGetrng(const char *Cmd);
int CmdEMVList(const char *Cmd);
int CmdEMVRoca(const char *Cmd);

#endif
