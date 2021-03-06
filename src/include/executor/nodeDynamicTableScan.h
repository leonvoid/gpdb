/*-------------------------------------------------------------------------
 *
 * nodeDynamicTableScan.h
 *
 * Portions Copyright (c) 2012 - present, EMC/Greenplum
 * Portions Copyright (c) 2012-Present Pivotal Software, Inc.
 *
 *
 * IDENTIFICATION
 *	    src/include/executor/nodeDynamicTableScan.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODEDYNAMICTABLESCAN_H
#define NODEDYNAMICTABLESCAN_H

#include "nodes/execnodes.h"

extern DynamicTableScanState *ExecInitDynamicTableScan(DynamicTableScan *node, EState *estate, int eflags);
extern TupleTableSlot *ExecDynamicTableScan(DynamicTableScanState *node);
extern void ExecEndDynamicTableScan(DynamicTableScanState *node);
extern void ExecReScanDynamicTable(DynamicTableScanState *node);

#endif
