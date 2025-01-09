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
  
                    /* try { // try from 001bdd17 to 001bdd4f has its CatchHandler @ 001be01e */
  local_b0 = param_1;
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec
            (&local_a8,"--group is mutually exclusive with -c/-d/-D/-u\n",0x2f);
  local_78 = local_98;
  local_88 = local_a8;
  uStack_84 = uStack_a4;
  uStack_80 = uStack_a0;
  uStack_7c = uStack_9c;
  _<alloc::string::String_as_core::ops::arith::Add<&str>>::add(&local_58,&local_88);
                    /* try { // try from 001bdd53 to 001bdd91 has its CatchHandler @ 001be023 */
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
                    /* try { // try from 001bdd95 to 001bddd9 has its CatchHandler @ 001be028 */
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
                    /* try { // try from 001bde72 to 001bdefc has its CatchHandler @ 001be00f */
    lVar4 = clap_builder::error::Error<F>::get(&local_b0,5);
    if ((((lVar4 == 0) || (cVar2 = map_clap_errors::___closure__(lVar4), cVar2 == '\0')) ||
        (lVar4 = clap_builder::error::Error<F>::get(&local_b0,1), lVar4 == 0)) ||
       (cVar2 = map_clap_errors::___closure__(lVar4), cVar2 == '\0')) {
                    /* try { // try from 001bdf18 to 001bdf6b has its CatchHandler @ 001be00f */
      lVar4 = clap_builder::error::Error<F>::get(&local_b0,5);
      if (((lVar4 == 0) || (cVar2 = map_clap_errors::___closure__(lVar4), cVar2 == '\0')) ||
         ((lVar4 = clap_builder::error::Error<F>::get(&local_b0,1), lVar4 == 0 ||
          (cVar2 = map_clap_errors::___closure__(lVar4), cVar2 == '\0')))) goto LAB_001bdfa4;
      local_90 = 1;
      local_a8 = local_70;
      uStack_a4 = uStack_6c;
      uStack_a0 = uStack_68;
      uStack_9c = uStack_64;
      local_98 = local_60;
                    /* try { // try from 001bdf8c to 001bdf95 has its CatchHandler @ 001be004 */
      uVar3 = ::alloc::boxed::Box<T>::new(&local_a8);
      bVar1 = false;
      goto LAB_001bde3a;
    }
    local_90 = 1;
    local_a8 = local_40;
    uStack_a4 = uStack_3c;
    uStack_a0 = uStack_38;
    uStack_9c = uStack_34;
    local_98 = local_30;
    uVar3 = ::alloc::boxed::Box<T>::new(&local_a8);
                    /* try { // try from 001bdf06 to 001bdf12 has its CatchHandler @ 001be028 */
    core::ptr::drop_in_place<alloc::string::String>(&local_70);
  }
  else {
    if (*(char *)(local_b0 + 0xd5) != '\b') {
LAB_001bdfa4:
                    /* try { // try from 001bdfaf to 001bdfb7 has its CatchHandler @ 001be00f */
      auVar5 = uucore::mods::error::
               _<impl_core::convert::From<clap_builder::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
               ::from(local_b0);
                    /* try { // try from 001bdfc4 to 001bdfd0 has its CatchHandler @ 001be028 */
      core::ptr::drop_in_place<alloc::string::String>(&local_70);
                    /* try { // try from 001bdfd7 to 001bdfe0 has its CatchHandler @ 001be023 */
      core::ptr::drop_in_place<alloc::string::String>(&local_40);
                    /* try { // try from 001bdfe4 to 001bdfed has its CatchHandler @ 001be01e */
      core::ptr::drop_in_place<alloc::string::String>(&local_58);
      return auVar5;
    }
    local_90 = 1;
    local_a8 = local_58;
    uStack_a4 = uStack_54;
    uStack_a0 = uStack_50;
    uStack_9c = uStack_4c;
    local_98 = local_48;
                    /* try { // try from 001bde18 to 001bde24 has its CatchHandler @ 001be00f */
    uVar3 = ::alloc::boxed::Box<T>::new(&local_a8);
    bVar1 = true;
                    /* try { // try from 001bde2d to 001bde39 has its CatchHandler @ 001be028 */
    core::ptr::drop_in_place<alloc::string::String>(&local_70);
LAB_001bde3a:
                    /* try { // try from 001bde3d to 001bde46 has its CatchHandler @ 001be023 */
    core::ptr::drop_in_place<alloc::string::String>(&local_40);
    if (bVar1) goto LAB_001bde59;
  }
                    /* try { // try from 001bde4f to 001bde58 has its CatchHandler @ 001be01e */
  core::ptr::drop_in_place<alloc::string::String>(&local_58);
LAB_001bde59:
  core::ptr::drop_in_place<clap_builder::error::Error>(local_b0);
  auVar5._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002304c0;
  auVar5._0_8_ = uVar3;
  return auVar5;
}