long _ZN9alacritty3ipc12send_message17hc4ebc7a84409f3fcE(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  int local_4c;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  undefined8 local_20;
  
                    /* try { // try from 0055c01e to 0055c027 has its CatchHandler @ 0055c142 */
  _ZN9alacritty3ipc11find_socket17h2033fc8b055af1f5E(&local_48,param_1);
  lVar1 = local_40;
  if ((int)local_48 != 1) {
    local_4c = local_48._4_4_;
                    /* try { // try from 0055c041 to 0055c068 has its CatchHandler @ 0055c128 */
    _ZN10serde_json3ser6to_vec17h3eec6d2f42eaa2d7E(&local_48,param_2);
    local_30 = local_48;
    local_28 = local_40;
    local_20 = local_38;
                    /* try { // try from 0055c082 to 0055c0cb has its CatchHandler @ 0055c115 */
    lVar1 = _ZN3std2io5Write9write_all17h7d16bb30299e266cE(&local_4c,local_40,local_38,-local_48);
    if (lVar1 == 0) {
      local_48 = 0;
      _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_std__io__error__Error_GT__GT_17h1de10a50e8d7f33dE
                (&local_48);
      lVar1 = (*(code *)
                PTR__ZN3std2os4unix3net8datagram12UnixDatagram8shutdown17h05e4febd5bdd1171E_009dff30
              )(&local_4c,1);
      if ((lVar1 == 0) &&
         (lVar1 = _ZN9alacritty3ipc12handle_reply17h596fdf307eae2b15E(&local_4c,*param_2),
         lVar1 == 0)) {
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_30);
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb4e0882300dc626aE(local_4c);
        lVar1 = 0;
        goto LAB_0055c0e9;
      }
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_30);
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hb4e0882300dc626aE(local_4c);
  }
LAB_0055c0e9:
  _ZN4core3ptr50drop_in_place_LT_alacritty__cli__SocketMessage_GT_17hefa041a5d6384fafE(param_2);
  return lVar1;
}