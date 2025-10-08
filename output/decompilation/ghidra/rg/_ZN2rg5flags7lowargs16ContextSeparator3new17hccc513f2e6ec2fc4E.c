void _ZN2rg5flags7lowargs16ContextSeparator3new17hccc513f2e6ec2fc4E(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_005267a8)(&local_38);
  if ((int)local_38 != 1) {
    _ZN4bstr7ext_vec7ByteVec14unescape_bytes17h5358798493048e4aE(param_1,local_30,local_28);
    return;
  }
  local_38 = &PTR_s_separator_must_be_valid_UTF_8__u_004eb468;
  local_30 = 1;
  local_28 = 8;
  local_20 = 0;
  uStack_18 = 0;
  uVar1 = _ZN6anyhow9__private10format_err17hd87f3faee3401bd9E(&local_38);
  param_1[1] = uVar1;
  *param_1 = 0x8000000000000001;
  return;
}