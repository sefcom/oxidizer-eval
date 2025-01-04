void __rustcall
uu_ls::create_hyperlink(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 local_108;
  undefined8 uStack_100;
  undefined *local_f8;
  code *local_f0;
  undefined8 *local_e8;
  code *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined local_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined local_a8 [8];
  long local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined local_80 [24];
  undefined local_68 [24];
  undefined **local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_90 = param_2;
  local_88 = param_3;
  hostname::get(&local_108);
  if (local_108 == (undefined *)0x8000000000000000) {
    create_hyperlink::___closure__(&local_d8,uStack_100);
  }
  else {
    local_c8 = local_f8;
    local_d8 = (undefined4)local_108;
    uStack_d4 = local_108._4_4_;
    uStack_d0 = (undefined4)uStack_100;
    uStack_cc = uStack_100._4_4_;
  }
                    /* try { // try from 0022caf8 to 0022cb08 has its CatchHandler @ 0022cc74 */
  std::sys::os_str::bytes::Slice::to_string_lossy(local_80,CONCAT44(uStack_cc,uStack_d0),local_c8);
                    /* try { // try from 0022cb0d to 0022cb24 has its CatchHandler @ 0022cc79 */
  std::fs::canonicalize(&local_108,param_4 + 0x18);
  core::result::Result<T,E>::unwrap_or_default(local_c0,&local_108);
                    /* try { // try from 0022cb2f to 0022cb39 has its CatchHandler @ 0022cc56 */
  std::sys::os_str::bytes::Slice::to_string_lossy(local_a8,local_b8,local_b0);
  uStack_100 = (code *)(local_98 + local_a0);
  local_108 = (undefined *)local_a0;
  local_f8 = &DAT_001363bb;
  local_f0 = (code *)0x6;
                    /* try { // try from 0022cb65 to 0022cb7a has its CatchHandler @ 0022cc5b */
  _<alloc::string::String_as_core::iter::traits::collect::FromIterator<alloc::string::String>>::
  from_iter(local_68,&local_108);
  uStack_100 = _<alloc::borrow::Cow<B>as_core::fmt::Display>::fmt;
  local_f0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_e8 = &local_90;
  local_e0 = _<&T_as_core::fmt::Display>::fmt;
  local_50 = &PTR_DAT_003129e8;
  local_48 = 4;
  local_30 = 0;
  local_38 = 3;
                    /* try { // try from 0022cbed to 0022cbfc has its CatchHandler @ 0022cc44 */
  local_108 = local_80;
  local_f8 = local_68;
  local_40 = (undefined *)&local_108;
  core::option::Option<T>::map_or_else(param_1,&local_50);
                    /* try { // try from 0022cbfd to 0022cc09 has its CatchHandler @ 0022cc5b */
  core::ptr::drop_in_place<alloc::string::String>(local_68);
                    /* try { // try from 0022cc0a to 0022cc13 has its CatchHandler @ 0022cc56 */
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(local_a8);
                    /* try { // try from 0022cc14 to 0022cc1d has its CatchHandler @ 0022cc79 */
  core::ptr::drop_in_place<std::path::PathBuf>(local_c0);
                    /* try { // try from 0022cc1e to 0022cc2a has its CatchHandler @ 0022cc74 */
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(local_80);
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(&local_d8);
  return;
}