void _ZN9alacritty8renderer12GlExtensions15load_extensions17h020fea1a75e9211dE(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  uint local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined local_40 [8];
  undefined8 local_38;
  undefined8 local_20;
  uint local_18;
  
  lVar1 = (*(code *)_ZN9alacritty2gl7storage9GetString17h69a233b31d134479E_0)(0x1f03);
  if (lVar1 == 0) {
    local_68[0] = 0;
    (*(code *)_ZN9alacritty2gl7storage11GetIntegerv17h28c461c932844c37E_0)(0x821d,local_68);
    local_50 = 0;
    local_38 = 0;
    local_20 = 1;
    local_18 = local_68[0];
    _ZN4core4iter6traits8iterator8Iterator7collect17hc2f5360092b52fd7E(param_1,&local_50);
    return;
  }
  lVar2 = (*(code *)PTR_strlen_009df220)(lVar1);
  (*(code *)PTR__ZN4core3ffi5c_str4CStr6to_str17h7208c416e44d9521E_009e0068)
            (local_68,lVar1,lVar2 + 1);
  if ((local_68[0] & 1) != 0) {
    _ZN87__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__default__Default_GT_7default17h1264fc145c2ba3a1E
              (param_1);
    return;
  }
  _ZN95__LT_core__str__pattern__MultiCharEqPattern_LT_C_GT__u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h598954deacbe2bfcE
            (local_40,local_60,local_58);
  local_50 = 0;
  local_48 = local_58;
  local_18 = CONCAT22(local_18._2_2_,1);
  _ZN4core4iter6traits8iterator8Iterator7collect17h5fca564b86255b66E(param_1,&local_50);
  return;
}