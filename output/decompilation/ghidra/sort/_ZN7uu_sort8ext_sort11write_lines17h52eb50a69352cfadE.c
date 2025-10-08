void _ZN7uu_sort8ext_sort11write_lines17h52eb50a69352cfadE
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined param_4)

{
  undefined8 *puVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  if (param_2 != 0) {
    puVar1 = param_1 + param_2 * 3;
    uStack_38 = in_RAX;
    do {
      uVar2 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17heb45096c5fb22700E
                        (param_3,*param_1,param_1[1]);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h965086cee6fc2068E
                (uVar2,&PTR_s_src_uu_sort_src_ext_sort_rs_0028c730);
      uStack_38 = CONCAT17(param_4,(undefined7)uStack_38);
      uVar2 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17heb45096c5fb22700E
                        (param_3,(long)&uStack_38 + 7,1);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h965086cee6fc2068E
                (uVar2,&PTR_s_src_uu_sort_src_ext_sort_rs_0028c748);
      param_1 = param_1 + 3;
    } while (param_1 != puVar1);
  }
  return;
}