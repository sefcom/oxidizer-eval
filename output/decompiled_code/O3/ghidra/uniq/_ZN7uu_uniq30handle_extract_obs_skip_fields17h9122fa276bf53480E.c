void __rustcall
uu_uniq::handle_extract_obs_skip_fields(undefined8 *param_1,long param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  char local_ca [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long local_b8;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined local_90 [8];
  long local_88;
  ulong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_68;
  long local_60;
  long local_58;
  char *local_50;
  char *local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_a8 = 0;
  local_a0 = 4;
  local_98 = 0;
  local_ca[1] = 0;
  local_ca[0] = '\0';
  local_58 = param_2 + param_3;
  local_50 = local_ca;
  local_48 = local_ca + 1;
  local_40 = &local_a8;
                    /* try { // try from 001bd927 to 001bd935 has its CatchHandler @ 001bda88 */
  local_60 = param_2;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (local_90,&local_60);
  if (local_98 == 0) {
                    /* try { // try from 001bd961 to 001bd99a has its CatchHandler @ 001bda79 */
    std::sys::os_str::bytes::Slice::to_owned(&local_c8,param_2,param_3);
    param_1[2] = local_b8;
    *(undefined4 *)param_1 = local_c8;
    *(undefined4 *)((long)param_1 + 4) = uStack_c4;
    *(undefined4 *)(param_1 + 1) = uStack_c0;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_bc;
  }
  else {
    if (local_ca[0] == '\0') {
      _<alloc::string::String_as_core::iter::traits::collect::FromIterator<&char>>::from_iter
                (&local_78,local_a0,local_a0 + local_98 * 4);
      if (*param_4 != -0x8000000000000000) {
        uVar1 = core::slice::iter::Iter<T>::make_slice(param_4[1],param_4[2] + param_4[1]);
                    /* try { // try from 001bd9b0 to 001bd9bc has its CatchHandler @ 001bda4b */
        ::alloc::vec::Vec<T,A>::append_elements(&local_78,uVar1);
      }
      local_b8 = local_68;
      local_c8 = local_78;
      uStack_c4 = uStack_74;
      uStack_c0 = uStack_70;
      uStack_bc = uStack_6c;
                    /* try { // try from 001bd9d1 to 001bd9d8 has its CatchHandler @ 001bda5a */
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(param_4);
      param_4[2] = local_b8;
      *(undefined4 *)param_4 = local_c8;
      *(undefined4 *)((long)param_4 + 4) = uStack_c4;
      *(undefined4 *)(param_4 + 1) = uStack_c0;
      *(undefined4 *)((long)param_4 + 0xc) = uStack_bc;
    }
    else {
                    /* try { // try from 001bd951 to 001bd958 has its CatchHandler @ 001bda71 */
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(param_4);
      *param_4 = -0x8000000000000000;
    }
    if (local_80 < 2) {
      *param_1 = 0x8000000000000000;
    }
    else {
                    /* try { // try from 001bd9ff to 001bda0b has its CatchHandler @ 001bda79 */
      _<alloc::string::String_as_core::iter::traits::collect::FromIterator<&char>>::from_iter
                (&local_38,local_88,local_88 + local_80 * 4);
      param_1[2] = local_28;
      *(undefined4 *)param_1 = local_38;
      *(undefined4 *)((long)param_1 + 4) = uStack_34;
      *(undefined4 *)(param_1 + 1) = uStack_30;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_2c;
    }
  }
                    /* try { // try from 001bda28 to 001bda31 has its CatchHandler @ 001bda88 */
  core::ptr::drop_in_place<alloc::vec::Vec<char>>(local_90);
  core::ptr::drop_in_place<alloc::vec::Vec<char>>(&local_a8);
  return;
}