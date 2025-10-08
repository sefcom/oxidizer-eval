void _ZN15linera_exporter8runloops18validator_exporter19ExportTask_LT_S_GT_27increment_destination_state17h7202a8b53390c579E
               (long param_1)

{
  LOCK();
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  UNLOCK();
  return;
}