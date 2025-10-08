void _ZN22linera_indexer_plugins10operations1_103__LT_impl_u20_serde__de__Deserialize_u20_for_u20_linera_indexer_plugins__operations__ChainOperation_GT_11deserialize17h2c1aa2dd5f011935E
               (undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    _ZN204__LT_linera_indexer_plugins__operations______LT_impl_u20_serde__de__Deserialize_u20_for_u20_linera_indexer_plugins__operations__ChainOperation_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_9visit_seq17h093650347e58af0eE
              ();
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
    return;
  }
  param_1[1] = 3;
  param_1[2] = "ChainOperation";
  param_1[3] = 0xe;
  *param_1 = 2;
  return;
}