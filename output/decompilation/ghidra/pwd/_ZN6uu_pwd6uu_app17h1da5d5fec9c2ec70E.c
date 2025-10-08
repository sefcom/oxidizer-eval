undefined8 _ZN6uu_pwd6uu_app17h1da5d5fec9c2ec70E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined local_ab0 [700];
  ulong local_7f4;
  undefined4 local_7ec;
  undefined local_7e8 [640];
  undefined local_568 [700];
  ulong local_2ac;
  undefined4 local_2a4;
  undefined local_2a0 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001dea80)();
  _ZN12clap_builder7builder7command7Command3new17h5fca40c868b15037E(local_ab0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17h422d52aed385c4dcE(local_568,local_ab0);
  _ZN12clap_builder7builder7command7Command5about17hcb3952938f8d1d95E(local_ab0,local_568);
                    /* try { // try from 00151457 to 00151470 has its CatchHandler @ 00151627 */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001deb78)(local_7e8,"{",0x18);
  _ZN12clap_builder7builder7command7Command14override_usage17h168e0206c42023f4E
            (local_568,local_ab0,local_7e8);
  (*(code *)PTR_memcpy_001dea50)(local_ab0,local_568,700);
  local_7f4 = local_2ac | 0x8000000080;
  local_7ec = local_2a4;
  _ZN12clap_builder7builder3arg3Arg3new17h5113b35231dbc8f9E(local_568,"l",7);
  _ZN12clap_builder7builder3arg3Arg5short17h044d053bcf658b35E(local_7e8,local_568,0x4c);
  _ZN12clap_builder7builder3arg3Arg4long17h5fc5f7754d706d79E(local_568,local_7e8,"l",7);
                    /* try { // try from 0015151b to 00151536 has its CatchHandler @ 00151618 */
  _ZN12clap_builder7builder3arg3Arg4help17hae64d7e49d4cea58E(local_7e8,local_568,"u",0x36);
  _ZN12clap_builder7builder3arg3Arg6action17hb2ecec27f8e19abdE(local_2a0,local_7e8);
  _ZN12clap_builder7builder7command7Command3arg17ha0aebcf88b273cdeE(local_568,local_ab0,local_2a0);
  _ZN12clap_builder7builder3arg3Arg3new17h5113b35231dbc8f9E(local_ab0,"physicalNotFoundTimedOut",8);
  _ZN12clap_builder7builder3arg3Arg5short17h044d053bcf658b35E(local_7e8,local_ab0,0x50);
  _ZN12clap_builder7builder3arg3Arg4long17h5fc5f7754d706d79E
            (local_ab0,local_7e8,"physicalNotFoundTimedOut",8);
                    /* try { // try from 001515b0 to 001515dd has its CatchHandler @ 00151636 */
  _ZN12clap_builder7builder3arg3Arg14overrides_with17hf79643918a1e51baE(local_7e8,local_ab0);
  _ZN12clap_builder7builder3arg3Arg4help17hae64d7e49d4cea58E
            (local_ab0,local_7e8,"avoid all symlinks",0x12);
  _ZN12clap_builder7builder3arg3Arg6action17hb2ecec27f8e19abdE(local_7e8,local_ab0);
  _ZN12clap_builder7builder7command7Command3arg17ha0aebcf88b273cdeE(param_1,local_568,local_7e8);
  return param_1;
}