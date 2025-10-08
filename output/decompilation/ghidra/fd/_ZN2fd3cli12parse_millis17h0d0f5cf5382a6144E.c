void _ZN2fd3cli12parse_millis17h0d0f5cf5382a6144E(ulong *param_1)

{
  char local_18;
  undefined local_17;
  ulong local_10;
  
  _ZN4core3num21__LT_impl_u20_u64_GT_16from_ascii_radix17h3a465e09cf2726d1E(&local_18);
  if (local_18 == '\x01') {
    *(undefined *)param_1 = local_17;
    *(undefined4 *)(param_1 + 1) = 1000000000;
    return;
  }
  *param_1 = local_10 / 1000;
  *(int *)(param_1 + 1) = ((int)local_10 + (int)(local_10 / 1000) * -1000) * 1000000;
  return;
}