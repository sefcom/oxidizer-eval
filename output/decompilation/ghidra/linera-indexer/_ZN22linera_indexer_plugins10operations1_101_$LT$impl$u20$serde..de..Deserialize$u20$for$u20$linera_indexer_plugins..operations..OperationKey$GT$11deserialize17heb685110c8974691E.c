void _ZN22linera_indexer_plugins10operations1_101__LT_impl_u20_serde__de__Deserialize_u20_for_u20_linera_indexer_plugins__operations__OperationKey_GT_11deserialize17heb685110c8974691E
               (undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    _ZN202__LT_linera_indexer_plugins__operations______LT_impl_u20_serde__de__Deserialize_u20_for_u20_linera_indexer_plugins__operations__OperationKey_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_seq17he4a5fa9a20dca0e4E
              ();
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
    return;
  }
  param_1[1] = 3;
  param_1[2] = "OperationKey";
  param_1[3] = 0xc;
  *param_1 = 1;
  return;
}