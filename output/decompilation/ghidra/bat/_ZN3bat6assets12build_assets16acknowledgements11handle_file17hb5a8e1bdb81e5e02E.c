void _ZN3bat6assets12build_assets16acknowledgements11handle_file17hb5a8e1bdb81e5e02E
               (undefined *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he1ce7ac76dd9ec5eE
                    (uVar1,uVar2,&DAT_0019fc53,6);
  if (cVar3 != '\0') {
    _ZN3bat6assets12build_assets16acknowledgements13handle_notice17h6c212b1b9d68349dE
              (param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    return;
  }
  cVar3 = _ZN4core5slice5ascii30__LT_impl_u20__u5b_u8_u5d__GT_20eq_ignore_ascii_case17he629bb1728d24824E
                    (uVar1,uVar2,&DAT_0019fc4c,7);
  if (cVar3 != '\0') {
    _ZN3bat6assets12build_assets16acknowledgements14handle_license17h76a66dfc08dd74ebE
              (param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    return;
  }
  *(undefined8 *)(param_1 + 8) = 0x8000000000000000;
  *param_1 = 0xd;
  return;
}