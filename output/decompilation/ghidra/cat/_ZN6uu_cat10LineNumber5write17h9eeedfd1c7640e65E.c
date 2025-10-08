void _ZN6uu_cat10LineNumber5write17h9eeedfd1c7640e65E(long param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  if (uVar1 < 0x21) {
    _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h4762d2070cade9bdE
              (param_2,param_1 + uVar1,0x20 - uVar1);
    return;
  }
  (*(code *)PTR__ZN4core5slice5index26slice_start_index_len_fail17h5fe115fcacae7da6E_001f2520)
            (uVar1,0x20,&PTR_s_src_uu_cat_src_cat_rs_001eaa70);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}