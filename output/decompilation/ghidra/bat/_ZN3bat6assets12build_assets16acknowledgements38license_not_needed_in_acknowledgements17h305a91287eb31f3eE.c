undefined4
_ZN3bat6assets12build_assets16acknowledgements38license_not_needed_in_acknowledgements17h305a91287eb31f3eE
          (undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x30,0);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &DAT_0019fe07;
    puVar2[1] = 0x47;
    puVar2[2] = &DAT_0019fe4e;
    puVar2[3] = 0x2b;
    puVar2[4] = &DAT_0019fe79;
    puVar2[5] = 0xce;
                    /* try { // try from 0053337e to 00533390 has its CatchHandler @ 005333bd */
    uVar1 = _ZN3bat6assets12build_assets16acknowledgements23license_contains_marker17h7fe1f84f804c53faE
                      (param_1,param_2,puVar2,3);
    _ZN4core3ptr105drop_in_place_LT_alloc__vec__Vec_LT__LP__RF_alloc__string__String_C__RF_alloc__string__String_RP__GT__GT_17h5d217fd71d6c8aa5E
              (3,puVar2);
    return uVar1;
  }
  uVar3 = (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00807840)(8,0x30);
                    /* catch() { ... } // from try @ 0053337e with catch @ 005333bd */
  _ZN4core3ptr105drop_in_place_LT_alloc__vec__Vec_LT__LP__RF_alloc__string__String_C__RF_alloc__string__String_RP__GT__GT_17h5d217fd71d6c8aa5E
            (3);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar3);
}