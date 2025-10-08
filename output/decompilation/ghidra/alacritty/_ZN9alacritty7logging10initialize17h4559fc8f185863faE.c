void _ZN9alacritty7logging10initialize17h4559fc8f185863faE
               (undefined8 *param_1,long param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined uVar3;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined local_c0 [176];
  
  cVar1 = *(char *)(param_2 + 0x1e4);
  uVar3 = 3;
  if (cVar1 == '\0') {
    if (*(char *)(param_2 + 0x1e0) != '\0') goto LAB_0055cf58;
    uVar3 = 2;
  }
  else {
    if (cVar1 == '\x01') goto LAB_0055cf58;
    if (cVar1 == '\x02') {
      uVar3 = 4;
      goto LAB_0055cf58;
    }
    uVar3 = 5;
  }
  if (*(char *)(param_2 + 0x1e3) != '\0') {
    uVar3 = *(char *)(param_2 + 0x1e3) == '\x01';
  }
LAB_0055cf58:
  _ZN4core4sync6atomic12atomic_store17h01a750bd23f9b0c6E
            (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,uVar3,0);
  local_178 = *param_3;
  uStack_174 = param_3[1];
  uStack_170 = param_3[2];
  uStack_16c = param_3[3];
  local_168 = param_3[4];
  uStack_164 = param_3[5];
  uStack_160 = param_3[6];
  uStack_15c = param_3[7];
  _ZN9alacritty7logging6Logger3new17h12092a1bc3938b41E(local_c0,&local_178);
                    /* try { // try from 0055cf8e to 0055cf9a has its CatchHandler @ 0055d010 */
  _ZN9alacritty7logging6Logger9file_path17he8b6db1c93e0851dE(&local_190,local_c0);
  (*(code *)PTR_memcpy_009de0b0)(&local_178,local_c0,0xb0);
                    /* try { // try from 0055cfb6 to 0055cfcd has its CatchHandler @ 0055d02e */
  uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h7463630cd21e0489E(&local_178);
  cVar1 = (*(code *)PTR__ZN3log16set_boxed_logger17h2b195a68dd82a5eaE_009dff60)
                    (uVar2,&
                           PTR__ZN4core3ptr47drop_in_place_LT_alacritty__logging__Logger_GT_17hc8a530d27e9f06bcE_00983030
                    );
  if (cVar1 != '\0') {
    *param_1 = 0x8000000000000001;
    _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17hce944beccab591c0E
              (&local_190);
    return;
  }
  param_1[2] = local_180;
  *param_1 = local_190;
  param_1[1] = uStack_188;
  return;
}