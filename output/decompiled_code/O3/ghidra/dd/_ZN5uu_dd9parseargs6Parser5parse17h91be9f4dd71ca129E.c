undefined8 * __rustcall uu_dd::parseargs::Parser::parse(undefined8 *param_1)

{
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  long local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined local_198 [176];
  long local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined local_c0 [176];
  
  read(&local_1c0);
  if (local_1c0 == 2) {
    param_1[3] = CONCAT44(uStack_1a4,local_1a8);
    param_1[4] = CONCAT44(uStack_19c,uStack_1a0);
    param_1[1] = local_1b8;
    param_1[2] = uStack_1b0;
    *param_1 = 3;
  }
  else {
    (*(code *)PTR_memcpy_00266e08)(local_c0,local_198,0xb0);
    local_e8 = local_1c0;
    local_1e8 = (undefined4)local_1b8;
    uStack_1e4 = (undefined4)((ulong)local_1b8 >> 0x20);
    uStack_1e0 = (undefined4)uStack_1b0;
    uStack_1dc = (undefined4)((ulong)uStack_1b0 >> 0x20);
    local_e0 = local_1e8;
    uStack_dc = uStack_1e4;
    uStack_d8 = uStack_1e0;
    uStack_d4 = uStack_1dc;
    local_d0 = local_1a8;
    uStack_cc = uStack_1a4;
    uStack_c8 = uStack_1a0;
    uStack_c4 = uStack_19c;
    validate(param_1,&local_e8);
  }
  return param_1;
}