/* WARNING: Type propagation algorithm not settling */

undefined8 * __rustcall
uu_uname::UNameOutput::new(undefined8 *param_1,char *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  undefined auVar12 [16];
  long local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  long local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  long local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  long local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  long local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  long local_4b8;
  long local_498;
  undefined8 local_478;
  undefined8 uStack_470;
  long local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  long local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  long local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  long local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  long local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  long local_3f0;
  long local_3d8;
  long local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined local_230 [8];
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1c8;
  undefined8 local_1c0;
  
  lVar7 = -0x8000000000000000;
  _<platform_info::lib_impl::target::PlatformInfo_as_platform_info::PlatformInfoAPI>::new
            (&local_468);
  uVar4 = local_458;
  uVar5 = uStack_460;
  lVar3 = local_468;
  if (local_468 == -0x8000000000000000) {
    uVar5 = new::___closure__(uStack_460,local_458);
    param_1[1] = uVar5;
    param_1[2] = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0020b9b0;
    *param_1 = 0x8000000000000001;
    return param_1;
  }
  (*(code *)PTR_memcpy_0020efd0)(local_230,&local_450,0x200);
  local_248 = lVar3;
  local_240 = uVar5;
  local_238 = uVar4;
  cVar1 = *param_2;
  if ((cVar1 == '\0') && (param_2[1] == '\0')) {
    uVar2 = *(undefined4 *)(param_2 + 2);
    cVar11 = (char)((uint)uVar2 >> 0x18);
    cVar10 = (char)((uint)uVar2 >> 0x10);
    cVar9 = (char)((uint)uVar2 >> 8);
    cVar8 = (char)uVar2;
    auVar12[0] = -(cVar8 == '\0');
    auVar12[1] = -(cVar8 == '\0');
    auVar12[2] = -(cVar8 == '\0');
    auVar12[3] = -(cVar8 == '\0');
    auVar12[4] = -(cVar9 == '\0');
    auVar12[5] = -(cVar9 == '\0');
    auVar12[6] = -(cVar9 == '\0');
    auVar12[7] = -(cVar9 == '\0');
    auVar12[8] = -(cVar10 == '\0');
    auVar12[9] = -(cVar10 == '\0');
    auVar12[10] = -(cVar10 == '\0');
    auVar12[0xb] = -(cVar10 == '\0');
    auVar12[0xc] = -(cVar11 == '\0');
    auVar12[0xd] = -(cVar11 == '\0');
    auVar12[0xe] = -(cVar11 == '\0');
    auVar12[0xf] = -(cVar11 == '\0');
    uVar6 = movmskps(param_4,auVar12);
    if ((((uVar6 & 1) == 0) ||
        ((((uVar6 & 4) == 0 || ((uVar6 & 2) == 0)) || ((byte)((byte)uVar6 >> 3) == 0)))) ||
       ((param_2[8] != '\0' || (param_2[6] != '\0')))) goto LAB_001a88a2;
    if (param_2[7] != '\0') goto LAB_001a8926;
LAB_001a88a7:
                    /* try { // try from 001a88a7 to 001a88b9 has its CatchHandler @ 001a8c61 */
    new::___closure__(&local_468,uVar5,uVar4);
    local_548 = local_458;
    local_558 = local_468;
    uStack_550 = uStack_460;
  }
  else {
LAB_001a88a2:
    if (param_2[1] != '\0' || cVar1 != '\0') goto LAB_001a88a7;
LAB_001a8926:
    local_558 = -0x8000000000000000;
  }
  if (param_2[2] == '\0' && cVar1 == '\0') {
    local_538 = -0x8000000000000000;
  }
  else {
                    /* try { // try from 001a8944 to 001a8950 has its CatchHandler @ 001a8cc9 */
    new::___closure__(&local_468,local_228,local_220);
    local_528 = local_458;
    local_538 = local_468;
    uStack_530 = uStack_460;
  }
  if (param_2[4] == '\0' && cVar1 == '\0') {
    local_518 = -0x8000000000000000;
  }
  else {
                    /* try { // try from 001a898e to 001a899a has its CatchHandler @ 001a8cba */
    new::___closure__(&local_468,local_210,local_208);
    local_508 = local_458;
    local_518 = local_468;
    uStack_510 = uStack_460;
  }
  if (param_2[3] == '\0' && cVar1 == '\0') {
    local_4f8 = -0x8000000000000000;
  }
  else {
                    /* try { // try from 001a89d8 to 001a89e4 has its CatchHandler @ 001a8cab */
    new::___closure__(&local_468,local_1f8,local_1f0);
    local_4e8 = local_458;
    local_4f8 = local_468;
    uStack_4f0 = uStack_460;
  }
  if (param_2[5] == '\0' && cVar1 == '\0') {
    local_4d8 = -0x8000000000000000;
    if (cVar1 == '\0' && param_2[8] == '\0') goto LAB_001a8afb;
  }
  else {
                    /* try { // try from 001a8a26 to 001a8a32 has its CatchHandler @ 001a8c9c */
    new::___closure__(&local_468,local_1e0,local_1d8);
    local_4c8 = local_458;
    local_4d8 = local_468;
    uStack_4d0 = uStack_460;
    if (cVar1 == '\0' && param_2[8] == '\0') {
LAB_001a8afb:
      local_4b8 = -0x8000000000000000;
      cVar1 = param_2[6];
      goto joined_r0x001a8aa3;
    }
  }
                    /* try { // try from 001a8a6f to 001a8a7b has its CatchHandler @ 001a8c8a */
  new::___closure__(&local_468,local_1c8,local_1c0);
  cVar1 = param_2[6];
  local_4b8 = local_468;
joined_r0x001a8aa3:
  if (cVar1 == '\0') {
    local_498 = -0x8000000000000000;
    cVar1 = param_2[7];
  }
  else {
                    /* try { // try from 001a8aa5 to 001a8abd has its CatchHandler @ 001a8c78 */
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_468,"unknown",7);
    cVar1 = param_2[7];
    local_498 = local_468;
  }
  if (cVar1 != '\0') {
                    /* try { // try from 001a8b19 to 001a8b31 has its CatchHandler @ 001a8c66 */
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_468,"unknown",7);
    local_478 = uStack_460;
    uStack_470 = local_458;
    lVar7 = local_468;
  }
  local_458 = local_548;
  local_468 = local_558;
  uStack_460 = uStack_550;
  local_450 = local_538;
  uStack_448 = uStack_530;
  local_440 = local_528;
  local_438 = local_518;
  uStack_430 = uStack_510;
  local_428 = local_508;
  local_420 = local_4f8;
  uStack_418 = uStack_4f0;
  local_410 = local_4e8;
  local_408 = local_4d8;
  uStack_400 = uStack_4d0;
  local_3f8 = local_4c8;
  local_3f0 = local_4b8;
  local_3d8 = local_498;
  (*(code *)PTR_memcpy_0020efd0)(param_1,&local_468,0xa8);
  param_1[0x15] = lVar7;
  param_1[0x16] = local_478;
  param_1[0x17] = uStack_470;
  core::ptr::drop_in_place<platform_info::lib_impl::target::PlatformInfo>(&local_248);
  return param_1;
}