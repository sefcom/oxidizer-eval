undefined4
_ZN3bat6assets12build_assets16acknowledgements34include_license_in_acknowledgments17h502a9fe06636a5abE
          (undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x50,0);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &DAT_0019fc7c;
    puVar2[1] = 0x7e;
    puVar2[2] = &DAT_0019fcfa;
    puVar2[3] = 0x49;
    puVar2[4] = &DAT_0019fd43;
    puVar2[5] = 0x48;
    puVar2[6] = &DAT_0019fd8b;
    puVar2[7] = 0x3f;
    puVar2[8] = &DAT_0019fdca;
    puVar2[9] = 0x3d;
                    /* try { // try from 005332c8 to 005332da has its CatchHandler @ 00533307 */
    uVar1 = _ZN3bat6assets12build_assets16acknowledgements23license_contains_marker17h7fe1f84f804c53faE
                      (param_1,param_2,puVar2,5);
    _ZN4core3ptr105drop_in_place_LT_alloc__vec__Vec_LT__LP__RF_alloc__string__String_C__RF_alloc__string__String_RP__GT__GT_17h5d217fd71d6c8aa5E
              (5,puVar2);
    return uVar1;
  }
  uVar3 = (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00807840)(8,0x50);
                    /* catch() { ... } // from try @ 005332c8 with catch @ 00533307 */
  _ZN4core3ptr105drop_in_place_LT_alloc__vec__Vec_LT__LP__RF_alloc__string__String_C__RF_alloc__string__String_RP__GT__GT_17h5d217fd71d6c8aa5E
            (5);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar3);
}