void _ZN7uu_sort4Line5print17he3975e626e2ad263E(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined8 uStack_18;
  
  if (*(char *)(param_3 + 0x7c) != '\0') {
    uVar1 = _ZN7uu_sort4Line11print_debug17h658b27ffee38ef6cE(*param_1,param_1[1],param_3,param_2);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hc797643040b7ea27E
              (uVar1,&PTR_s_src_uu_sort_src_sort_rs_002ff8d8);
    return;
  }
  uStack_18 = in_RAX;
  uVar1 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h1b2fae9944935ce3E
                    (param_2,*param_1,param_1[1]);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hc797643040b7ea27E
            (uVar1,&PTR_s_src_uu_sort_src_sort_rs_002ff8a8);
  uStack_18 = CONCAT17(*(undefined *)(param_3 + 0x99),(undefined7)uStack_18);
  uVar1 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h1b2fae9944935ce3E
                    (param_2,(long)&uStack_18 + 7,1);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hc797643040b7ea27E
            (uVar1,&PTR_s_src_uu_sort_src_sort_rs_002ff8c0);
  return;
}