undefined  [16] __rustcall uu_uniq::map_clap_errors(long param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined auVar5 [16];
  long local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
                    /* try { // try from 001bdc97 to 001bdccf has its CatchHandler @ 001bdf9e */
  local_b0 = param_1;
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec
            (&local_a8,"--group is mutually exclusive with -c/-d/-D/-u\n",0x2f);
  local_78 = local_98;
  local_88 = local_a8;
  uStack_84 = uStack_a4;
  uStack_80 = uStack_a0;
  uStack_7c = uStack_9c;
  _<alloc::string::String_as_core::ops::arith::Add<&str>>::add(&local_58,&local_88);
                    /* try { // try from 001bdcd3 to 001bdd11 has its CatchHandler @ 001bdfa3 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec
            (&local_a8,
             "invalid argument \'badoption\' for \'--group\'\nValid arguments are:\n  - \'prepend\'\n  - \'append\'\n  - \'separate\'\n  - \'both\'\n"
             ,0x75);
  local_78 = local_98;
  local_88 = local_a8;
  uStack_84 = uStack_a4;
  uStack_80 = uStack_a0;
  uStack_7c = uStack_9c;
  _<alloc::string::String_as_core::ops::arith::Add<&str>>::add(&local_40,&local_88);
                    /* try { // try from 001bdd15 to 001bdd59 has its CatchHandler @ 001bdfa8 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec
            (&local_a8,
             "invalid argument \'badoption\' for \'--all-repeated\'\nValid arguments are:\n  - \'none\'\n  - \'prepend\'\n  - \'separate\'\n"
             ,0x6f);
  local_78 = local_98;
  local_88 = local_a8;
  uStack_84 = uStack_a4;
  uStack_80 = uStack_a0;
  uStack_7c = uStack_9c;
  _<alloc::string::String_as_core::ops::arith::Add<&str>>::add(&local_70,&local_88);
  if (*(char *)(local_b0 + 0xd5) == '\0') {
                    /* try { // try from 001bddf2 to 001bde7c has its CatchHandler @ 001bdf8f */
    lVar4 = clap_builder::error::Error<F>::get(&local_b0,5);
    if ((((lVar4 == 0) || (cVar2 = map_clap_errors::___closure__(lVar4), cVar2 == '\0')) ||
        (lVar4 = clap_builder::error::Error<F>::get(&local_b0,1), lVar4 == 0)) ||
       (cVar2 = map_clap_errors::___closure__(lVar4), cVar2 == '\0')) {
                    /* try { // try from 001bde98 to 001bdeeb has its CatchHandler @ 001bdf8f */
      lVar4 = clap_builder::error::Error<F>::get(&local_b0,5);
      if (((lVar4 == 0) || (cVar2 = map_clap_errors::___closure__(lVar4), cVar2 == '\0')) ||
         ((lVar4 = clap_builder::error::Error<F>::get(&local_b0,1), lVar4 == 0 ||
          (cVar2 = map_clap_errors::___closure__(lVar4), cVar2 == '\0')))) goto LAB_001bdf24;
      local_90 = 1;
      local_a8 = local_70;
      uStack_a4 = uStack_6c;
      uStack_a0 = uStack_68;
      uStack_9c = uStack_64;
      local_98 = local_60;
                    /* try { // try from 001bdf0c to 001bdf15 has its CatchHandler @ 001bdf84 */
      uVar3 = ::alloc::boxed::Box<T>::new(&local_a8);
      bVar1 = false;
      goto LAB_001bddba;
    }
    local_90 = 1;
    local_a8 = local_40;
    uStack_a4 = uStack_3c;
    uStack_a0 = uStack_38;
    uStack_9c = uStack_34;
    local_98 = local_30;
    uVar3 = ::alloc::boxed::Box<T>::new(&local_a8);
                    /* try { // try from 001bde86 to 001bde92 has its CatchHandler @ 001bdfa8 */
    core::ptr::drop_in_place<alloc::string::String>(&local_70);
  }
  else {
    if (*(char *)(local_b0 + 0xd5) != '\b') {
LAB_001bdf24:
                    /* try { // try from 001bdf2f to 001bdf37 has its CatchHandler @ 001bdf8f */
      auVar5 = uucore::mods::error::
               _<impl_core::convert::From<clap_builder::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
               ::from(local_b0);
                    /* try { // try from 001bdf44 to 001bdf50 has its CatchHandler @ 001bdfa8 */
      core::ptr::drop_in_place<alloc::string::String>(&local_70);
                    /* try { // try from 001bdf57 to 001bdf60 has its CatchHandler @ 001bdfa3 */
      core::ptr::drop_in_place<alloc::string::String>(&local_40);
                    /* try { // try from 001bdf64 to 001bdf6d has its CatchHandler @ 001bdf9e */
      core::ptr::drop_in_place<alloc::string::String>(&local_58);
      return auVar5;
    }
    local_90 = 1;
    local_a8 = local_58;
    uStack_a4 = uStack_54;
    uStack_a0 = uStack_50;
    uStack_9c = uStack_4c;
    local_98 = local_48;
                    /* try { // try from 001bdd98 to 001bdda4 has its CatchHandler @ 001bdf8f */
    uVar3 = ::alloc::boxed::Box<T>::new(&local_a8);
    bVar1 = true;
                    /* try { // try from 001bddad to 001bddb9 has its CatchHandler @ 001bdfa8 */
    core::ptr::drop_in_place<alloc::string::String>(&local_70);
LAB_001bddba:
                    /* try { // try from 001bddbd to 001bddc6 has its CatchHandler @ 001bdfa3 */
    core::ptr::drop_in_place<alloc::string::String>(&local_40);
    if (bVar1) goto LAB_001bddd9;
  }
                    /* try { // try from 001bddcf to 001bddd8 has its CatchHandler @ 001bdf9e */
  core::ptr::drop_in_place<alloc::string::String>(&local_58);
LAB_001bddd9:
  core::ptr::drop_in_place<clap_builder::error::Error>(local_b0);
  auVar5._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00231090;
  auVar5._0_8_ = uVar3;
  return auVar5;
}