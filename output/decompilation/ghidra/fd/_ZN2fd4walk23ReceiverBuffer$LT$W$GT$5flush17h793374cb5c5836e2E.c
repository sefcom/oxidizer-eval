ulong _ZN2fd4walk23ReceiverBuffer_LT_W_GT_5flush17h793374cb5c5836e2E(long param_1)

{
  undefined8 unaff_RBX;
  bool bVar1;
  long local_10;
  
  local_10 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17hc70b0dccf2b498f6E
                       (param_1 + 0x10);
  bVar1 = local_10 == 0;
  _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hf603403cb1b5404dE
            (&local_10);
  return CONCAT71((int7)((ulong)unaff_RBX >> 8),bVar1 * '\x02') & 0xffffffff | 4;
}