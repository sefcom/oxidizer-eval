void _ZN7uu_sort8ext_sort11write_lines17he98d063bf4fa553bE
               (long param_1,long param_2,undefined8 param_3,undefined param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined local_41;
  long local_40;
  long local_38;
  
  local_38 = param_1 + param_2 * 0x18;
  local_40 = param_1;
  puVar1 = (undefined8 *)
           _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h025563f650802cf2E
                     (&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    do {
      uVar2 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h34e99087d02bdaf1E
                        (param_3,*puVar1,puVar1[1]);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hc797643040b7ea27E
                (uVar2,&PTR_s_src_uu_sort_src_ext_sort_rs_00301e88);
      local_41 = param_4;
      uVar2 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h34e99087d02bdaf1E
                        (param_3,&local_41,1);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hc797643040b7ea27E
                (uVar2,&PTR_s_src_uu_sort_src_ext_sort_rs_00301ea0);
      puVar1 = (undefined8 *)
               _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h025563f650802cf2E
                         (&local_40);
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}