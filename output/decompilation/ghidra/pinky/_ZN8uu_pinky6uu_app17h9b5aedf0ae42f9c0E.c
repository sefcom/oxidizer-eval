undefined8 _ZN8uu_pinky6uu_app17h9b5aedf0ae42f9c0E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_aa8 [700];
  ulong local_7ec;
  undefined4 local_7e4;
  undefined local_7e0 [700];
  ulong local_524;
  undefined4 local_51c;
  undefined local_518 [640];
  undefined local_298 [640];
  
  uVar1 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ffcf0)();
  _ZN12clap_builder7builder7command7Command3new17h254d9f9da90c7328E(local_7e0,uVar1);
  _ZN12clap_builder7builder7command7Command7version17hd5923f78d296cc3cE(auStack_aa8,local_7e0);
  _ZN12clap_builder7builder7command7Command5about17hfb44365e348c242fE(local_7e0,auStack_aa8);
                    /* try { // try from 00164226 to 0016423f has its CatchHandler @ 0016485f */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_001fff30)(local_518,&DAT_0011a963,0x18)
  ;
  _ZN12clap_builder7builder7command7Command14override_usage17h97a04b23c2e5e2dcE
            (auStack_aa8,local_7e0,local_518);
  (*(code *)PTR_memcpy_001ffc18)(local_7e0,auStack_aa8,700);
  local_524 = local_7ec | 0x8008000080080;
  local_51c = local_7e4;
  _ZN12clap_builder7builder3arg3Arg3new17he9dede6b11ca1b49E(auStack_aa8,&DAT_0011a97b,0xb);
  _ZN12clap_builder7builder3arg3Arg5short17hcd72c6e32bd4d85cE(local_518,auStack_aa8,0x6c);
                    /* try { // try from 001642c8 to 001642ee has its CatchHandler @ 00164871 */
  _ZN12clap_builder7builder3arg3Arg8requires17h733af6e8d6d30664E(auStack_aa8,local_518);
  _ZN12clap_builder7builder3arg3Arg4help17h48afb46a0abc9439E
            (local_518,auStack_aa8,&DAT_0011a986,0x32);
  _ZN12clap_builder7builder3arg3Arg6action17hd0adc43b30523780E(local_298,local_518,2);
  _ZN12clap_builder7builder7command7Command3arg17hc0506198e59735c3E(auStack_aa8,local_7e0,local_298)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17he9dede6b11ca1b49E(local_7e0,&DAT_0011a9b8,0xd);
  _ZN12clap_builder7builder3arg3Arg5short17hcd72c6e32bd4d85cE(local_518,local_7e0,0x62);
                    /* try { // try from 00164353 to 0016436e has its CatchHandler @ 00164852 */
  _ZN12clap_builder7builder3arg3Arg4help17h48afb46a0abc9439E(local_7e0,local_518,&DAT_0011a9c5,0x37)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hd0adc43b30523780E(local_518,local_7e0,2);
  _ZN12clap_builder7builder7command7Command3arg17hc0506198e59735c3E(local_7e0,auStack_aa8,local_518)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17he9dede6b11ca1b49E(auStack_aa8,&DAT_0011a9fc,0x11);
  _ZN12clap_builder7builder3arg3Arg5short17hcd72c6e32bd4d85cE(local_518,auStack_aa8,0x68);
                    /* try { // try from 001643ce to 001643e4 has its CatchHandler @ 00164840 */
  _ZN12clap_builder7builder3arg3Arg4help17h48afb46a0abc9439E
            (auStack_aa8,local_518,&DAT_0011aa0d,0x2b);
  _ZN12clap_builder7builder3arg3Arg6action17hd0adc43b30523780E(local_518,auStack_aa8,2);
  _ZN12clap_builder7builder7command7Command3arg17hc0506198e59735c3E(auStack_aa8,local_7e0,local_518)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17he9dede6b11ca1b49E(local_7e0,&DAT_0011aa38,0xe);
  _ZN12clap_builder7builder3arg3Arg5short17hcd72c6e32bd4d85cE(local_518,local_7e0,0x70);
                    /* try { // try from 00164444 to 0016445f has its CatchHandler @ 00164833 */
  _ZN12clap_builder7builder3arg3Arg4help17h48afb46a0abc9439E(local_7e0,local_518,&DAT_0011aa46,0x28)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hd0adc43b30523780E(local_518,local_7e0,2);
  _ZN12clap_builder7builder7command7Command3arg17hc0506198e59735c3E(local_7e0,auStack_aa8,local_518)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17he9dede6b11ca1b49E(auStack_aa8,&DAT_0011aa6e,0xc);
  _ZN12clap_builder7builder3arg3Arg5short17hcd72c6e32bd4d85cE(local_518,auStack_aa8,0x73);
                    /* try { // try from 001644bf to 001644d5 has its CatchHandler @ 00164821 */
  _ZN12clap_builder7builder3arg3Arg4help17h48afb46a0abc9439E
            (auStack_aa8,local_518,&DAT_0011aa7a,0x2b);
  _ZN12clap_builder7builder3arg3Arg6action17hd0adc43b30523780E(local_518,auStack_aa8,2);
  _ZN12clap_builder7builder7command7Command3arg17hc0506198e59735c3E(auStack_aa8,local_7e0,local_518)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17he9dede6b11ca1b49E(local_7e0,&DAT_0011aaa5,0xd);
  _ZN12clap_builder7builder3arg3Arg5short17hcd72c6e32bd4d85cE(local_518,local_7e0,0x66);
                    /* try { // try from 00164535 to 00164550 has its CatchHandler @ 00164814 */
  _ZN12clap_builder7builder3arg3Arg4help17h48afb46a0abc9439E(local_7e0,local_518,&DAT_0011aab2,0x30)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hd0adc43b30523780E(local_518,local_7e0,2);
  _ZN12clap_builder7builder7command7Command3arg17hc0506198e59735c3E(local_7e0,auStack_aa8,local_518)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17he9dede6b11ca1b49E(auStack_aa8,&DAT_0011aae2,9);
  _ZN12clap_builder7builder3arg3Arg5short17hcd72c6e32bd4d85cE(local_518,auStack_aa8,0x77);
                    /* try { // try from 001645b0 to 001645c6 has its CatchHandler @ 00164802 */
  _ZN12clap_builder7builder3arg3Arg4help17h48afb46a0abc9439E
            (auStack_aa8,local_518,&DAT_0011aaeb,0x29);
  _ZN12clap_builder7builder3arg3Arg6action17hd0adc43b30523780E(local_518,auStack_aa8,2);
  _ZN12clap_builder7builder7command7Command3arg17hc0506198e59735c3E(auStack_aa8,local_7e0,local_518)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17he9dede6b11ca1b49E(local_7e0,&DAT_0011ab14,0xe);
  _ZN12clap_builder7builder3arg3Arg5short17hcd72c6e32bd4d85cE(local_518,local_7e0,0x69);
                    /* try { // try from 00164626 to 00164641 has its CatchHandler @ 001647f5 */
  _ZN12clap_builder7builder3arg3Arg4help17h48afb46a0abc9439E(local_7e0,local_518,&DAT_0011ab22,0x39)
  ;
  _ZN12clap_builder7builder3arg3Arg6action17hd0adc43b30523780E(local_518,local_7e0,2);
  _ZN12clap_builder7builder7command7Command3arg17hc0506198e59735c3E(local_7e0,auStack_aa8,local_518)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17he9dede6b11ca1b49E(auStack_aa8,&DAT_0011ab5b,0x13);
  _ZN12clap_builder7builder3arg3Arg5short17hcd72c6e32bd4d85cE(local_518,auStack_aa8,0x71);
                    /* try { // try from 001646a1 to 001646b7 has its CatchHandler @ 001647e0 */
  _ZN12clap_builder7builder3arg3Arg4help17h48afb46a0abc9439E
            (auStack_aa8,local_518,&DAT_0011ab6e,0x44);
  _ZN12clap_builder7builder3arg3Arg6action17hd0adc43b30523780E(local_518,auStack_aa8,2);
  _ZN12clap_builder7builder7command7Command3arg17hc0506198e59735c3E(auStack_aa8,local_7e0,local_518)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17he9dede6b11ca1b49E(local_7e0,&DAT_00118b24,4);
  _ZN12clap_builder7builder3arg3Arg6action17hd0adc43b30523780E(local_518,local_7e0,1);
                    /* try { // try from 00164717 to 00164726 has its CatchHandler @ 001647d0 */
  _ZN12clap_builder7builder3arg3Arg10value_hint17h7347dd9d724a640aE(local_298,local_518);
  _ZN12clap_builder7builder7command7Command3arg17hc0506198e59735c3E(local_7e0,auStack_aa8,local_298)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17he9dede6b11ca1b49E(auStack_aa8,&DAT_00118b78,4);
  _ZN12clap_builder7builder3arg3Arg4long17h42ff1ba7c7687e6eE(local_518,auStack_aa8);
                    /* try { // try from 00164769 to 0016477f has its CatchHandler @ 001647bb */
  _ZN12clap_builder7builder3arg3Arg4help17h48afb46a0abc9439E
            (auStack_aa8,local_518,&DAT_0011abb2,0x16);
  _ZN12clap_builder7builder3arg3Arg6action17hd0adc43b30523780E(local_518,auStack_aa8,5);
  _ZN12clap_builder7builder7command7Command3arg17hc0506198e59735c3E(param_1,local_7e0,local_518);
  return param_1;
}