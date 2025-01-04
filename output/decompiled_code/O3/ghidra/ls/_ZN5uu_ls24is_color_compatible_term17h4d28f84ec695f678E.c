undefined8 __rustcall uu_ls::is_color_compatible_term(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 *local_88;
  undefined *local_80;
  undefined local_68 [8];
  undefined8 local_60;
  long local_58;
  undefined local_50 [16];
  long local_40;
  undefined8 local_38;
  long local_30;
  
  std::env::var(&local_88,&DAT_00123fb4,4);
  puVar1 = local_88;
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
            (&local_88);
  std::env::var(&local_88,&DAT_00134ce6,9);
  puVar2 = local_88;
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>
            (&local_88);
  std::env::var(&local_88,&DAT_00123fb4,4);
  core::result::Result<T,E>::unwrap_or_default(local_68,&local_88);
                    /* try { // try from 0021f359 to 0021f375 has its CatchHandler @ 0021f414 */
  std::env::var(&local_88,&DAT_00134ce6,9);
  core::result::Result<T,E>::unwrap_or_default(local_50,&local_88);
  if (((puVar2 == (undefined1 *)0x0 && puVar1 == (undefined1 *)0x0) && (local_58 == 0)) &&
     (local_40 == 0)) {
LAB_0021f3e1:
                    /* try { // try from 0021f3e1 to 0021f3ea has its CatchHandler @ 0021f414 */
    core::ptr::drop_in_place<alloc::string::String>(local_50);
    core::ptr::drop_in_place<alloc::string::String>(local_68);
    uVar4 = 0;
  }
  else {
    if (local_58 != 0) {
      local_38 = local_60;
      local_30 = local_58;
      local_88 = anon_84df56382e2e566cd8a063a5d0153d3b_47_llvm_4004663911042702431;
      local_80 = &DAT_00316b60;
                    /* try { // try from 0021f3b8 to 0021f3c4 has its CatchHandler @ 0021f405 */
      cVar3 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::any
                        (&local_88,&local_38);
      if (cVar3 == '\0') goto LAB_0021f3e1;
    }
                    /* try { // try from 0021f3c9 to 0021f3d2 has its CatchHandler @ 0021f414 */
    core::ptr::drop_in_place<alloc::string::String>(local_50);
    core::ptr::drop_in_place<alloc::string::String>(local_68);
    uVar4 = 1;
  }
  return uVar4;
}