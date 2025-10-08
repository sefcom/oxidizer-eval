undefined8 _ZN7forc_tx4main17h1af22e0ef18e8626E(void)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined *local_4b8;
  code *local_4b0;
  undefined local_4a8 [32];
  undefined8 local_488;
  undefined **ppuStack_480;
  undefined **ppuStack_478;
  undefined **local_470;
  undefined8 uStack_468;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined local_450 [384];
  undefined local_2d0 [232];
  long local_1e8 [3];
  undefined **local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined local_198 [376];
  
  (*(code *)PTR__ZN7forc_tx7Command5parse17hcdf58518c22f33a0E_002d82d8)(local_2d0);
                    /* try { // try from 0021003b to 002100a0 has its CatchHandler @ 00210291 */
  (*(code *)
    PTR__ZN7forc_tx114__LT_impl_u20_core__convert__TryFrom_LT_forc_tx__Transaction_GT__u20_for_u20_fuel_tx__transaction__Transaction_GT_8try_from17h92e9152201130caaE_002d82e0
  )(&local_488,local_2d0);
  ppuVar2 = local_488;
  local_4e8 = ppuStack_480;
  uStack_4e0 = ppuStack_478;
  local_4d8 = local_470;
  uStack_4d0 = uStack_468;
  local_4c8 = local_460;
  uStack_4c4 = uStack_45c;
  uStack_4c0 = uStack_458;
  uStack_4bc = uStack_454;
  if (local_488 == (undefined **)0x8000000000000006) {
    local_460 = uStack_458;
    uStack_45c = uStack_454;
    uVar3 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17he8cc8e2c8d4edea3E
                      (&local_488);
    bVar1 = true;
  }
  else {
    (*(code *)PTR_memcpy_002d8190)(local_198,local_450,0x178);
    local_1c8 = (undefined4)local_4e8;
    uStack_1c4 = local_4e8._4_4_;
    uStack_1c0 = (undefined4)uStack_4e0;
    uStack_1bc = uStack_4e0._4_4_;
    local_1b8 = (undefined4)local_4d8;
    uStack_1b4 = local_4d8._4_4_;
    uStack_1b0 = (undefined4)uStack_4d0;
    uStack_1ac = uStack_4d0._4_4_;
    local_1a8 = local_4c8;
    uStack_1a4 = uStack_4c4;
    uStack_1a0 = uStack_4c0;
    uStack_19c = uStack_4bc;
    local_1d0 = ppuVar2;
    if (local_1e8[0] == -0x8000000000000000) {
                    /* try { // try from 0021010d to 00210168 has its CatchHandler @ 00210279 */
      _ZN10serde_json3ser13to_vec_pretty17hf72b9b9867f0682eE(&local_488,&local_1d0);
      if (local_488 != (undefined **)&DAT_8000000000000000) {
        local_4e8 = local_488;
        uStack_4e0 = ppuStack_480;
        local_4d8 = ppuStack_478;
        local_4b0 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_488 = (undefined **)&DAT_002d05b0;
        ppuStack_480 = (undefined **)0x2;
        uStack_468 = 0;
        ppuStack_478 = &local_4b8;
        local_470 = (undefined **)&DAT_00000001;
                    /* try { // try from 002101c9 to 002101d3 has its CatchHandler @ 00210263 */
        local_4b8 = (undefined *)&local_4e8;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_002d82e8)(&local_488);
        _ZN4core3ptr228drop_in_place_LT_fuel_tx__transaction__types__input__message__Message_LT_fuel_tx__transaction__types__input__message__specifications__MessageData_LT_fuel_tx__transaction__types__input__message__specifications__Signed_GT__GT__GT_17h159ff9a6ea7c429bE
                  (local_4e8,uStack_4e0);
LAB_00210243:
        _ZN4core3ptr54drop_in_place_LT_fuel_tx__transaction__Transaction_GT_17hbc133d229fbc8244E
                  (&local_1d0);
        return 0;
      }
      uVar3 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h6f59d702294c4c4dE
                        ();
      bVar1 = true;
    }
    else {
      _ZN3std2fs4File6create17h28d8e0a3e2af2933E(&local_488,local_1e8);
      if ((int)local_488 == 1) {
        uVar3 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h17518026930b164fE
                          (ppuStack_480);
      }
      else {
                    /* try { // try from 002101ed to 00210219 has its CatchHandler @ 00210279 */
        _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17hfadb38c264d7fd19E
                  (local_4a8,local_488._4_4_);
        lVar4 = _ZN10serde_json3ser16to_writer_pretty17h508d024f3811bf68E(local_4a8,&local_1d0);
        if (lVar4 == 0) goto LAB_00210243;
        uVar3 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h6f59d702294c4c4dE
                          (lVar4);
      }
      bVar1 = false;
    }
                    /* try { // try from 0021021d to 0021024f has its CatchHandler @ 00210291 */
    _ZN4core3ptr54drop_in_place_LT_fuel_tx__transaction__Transaction_GT_17hbc133d229fbc8244E
              (&local_1d0);
  }
  if ((local_1e8[0] != -0x8000000000000000) && (bVar1)) {
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h095369848fb91941E(local_1e8);
  }
  return uVar3;
}