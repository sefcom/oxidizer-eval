undefined8 _ZN7uu_join6uu_app17hf0c646455b56e430E(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined auStack_ab8 [632];
  uint local_840;
  undefined4 local_83c;
  undefined local_838 [632];
  uint local_5c0;
  undefined4 local_5bc;
  ulong local_57c;
  undefined4 local_574;
  undefined local_570 [632];
  uint local_2f8;
  undefined4 local_2f4;
  ulong local_2b4;
  undefined4 local_2ac;
  undefined *local_2a8;
  undefined8 local_2a0;
  undefined *local_298;
  undefined8 local_290;
  uint local_30;
  undefined4 local_2c;
  
  uVar2 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00204fa0)();
  _ZN12clap_builder7builder7command7Command3new17h525d6d2cdd39d258E(local_570,uVar2);
  _ZN12clap_builder7builder7command7Command7version17h7d94b48d97665849E(local_838,local_570);
  _ZN12clap_builder7builder7command7Command5about17h99e4f5e889dd74baE(local_570,local_838);
                    /* try { // try from 0016df9f to 0016dfb3 has its CatchHandler @ 0016e9ce */
  (*(code *)PTR__ZN6uucore12format_usage17he053403a896311edE_00205110)
            (auStack_ab8,&DAT_0011b147,0x1a);
  _ZN12clap_builder7builder7command7Command14override_usage17hef9cde8e09fd86beE
            (local_838,local_570,auStack_ab8);
  (*(code *)PTR_memcpy_00204da0)(local_570,local_838,700);
  local_2b4 = local_57c | 0x8000000080;
  local_2ac = local_574;
  _ZN12clap_builder7builder3arg3Arg3new17h4235f5218f32fea7E(local_838,&DAT_0011b033,1);
  _ZN12clap_builder7builder3arg3Arg5short17h36512b2e98c7e56dE(auStack_ab8,local_838,0x61);
  _ZN12clap_builder7builder3arg3Arg6action17h8908cb4a12e2a288E(local_838,auStack_ab8,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17h569cca45bec2bb7eE(auStack_ab8,local_838);
  local_2a8 = &DAT_0011b035;
  local_2a0 = 1;
  local_298 = &DAT_0011b036;
  local_290 = 1;
                    /* try { // try from 0016e098 to 0016e0e7 has its CatchHandler @ 0016ea8b */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h43e16d855eaff5dcE
            (local_838,auStack_ab8,&local_2a8);
  _ZN12clap_builder7builder3arg3Arg10value_name17h017f8a4149966e60E
            (auStack_ab8,local_838,&DAT_0011b161,7);
  _ZN12clap_builder7builder3arg3Arg4help17h10b3faf2bc03bd5cE
            (&local_2a8,auStack_ab8,&DAT_0011b168,0x67);
  _ZN12clap_builder7builder7command7Command3arg17hb993b0b5afd8ecadE(local_838,local_570,&local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h4235f5218f32fea7E(local_570,&DAT_0011b032,1);
  _ZN12clap_builder7builder3arg3Arg5short17h36512b2e98c7e56dE(auStack_ab8,local_570,0x76);
  _ZN12clap_builder7builder3arg3Arg6action17h8908cb4a12e2a288E(local_570,auStack_ab8,1);
  _ZN12clap_builder7builder3arg3Arg8num_args17h569cca45bec2bb7eE(auStack_ab8,local_570);
  local_2a8 = &DAT_0011b035;
  local_2a0 = 1;
  local_298 = &DAT_0011b036;
  local_290 = 1;
                    /* try { // try from 0016e182 to 0016e1d1 has its CatchHandler @ 0016ea79 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h43e16d855eaff5dcE
            (local_570,auStack_ab8,&local_2a8);
  _ZN12clap_builder7builder3arg3Arg10value_name17h017f8a4149966e60E
            (auStack_ab8,local_570,&DAT_0011b161,7);
  _ZN12clap_builder7builder3arg3Arg4help17h10b3faf2bc03bd5cE
            (&local_2a8,auStack_ab8,&DAT_0011b1cf,0x31);
  _ZN12clap_builder7builder7command7Command3arg17hb993b0b5afd8ecadE(local_570,local_838,&local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h4235f5218f32fea7E(local_838,&DAT_0011b03a,1);
  _ZN12clap_builder7builder3arg3Arg5short17h36512b2e98c7e56dE(auStack_ab8,local_838,0x65);
                    /* try { // try from 0016e21e to 0016e255 has its CatchHandler @ 0016ea55 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h017f8a4149966e60E
            (local_838,auStack_ab8,&DAT_0011b200,5);
  _ZN12clap_builder7builder3arg3Arg4help17h10b3faf2bc03bd5cE
            (auStack_ab8,local_838,&DAT_0011b205,0x27);
  _ZN12clap_builder7builder7command7Command3arg17hb993b0b5afd8ecadE(local_838,local_570,auStack_ab8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h4235f5218f32fea7E(local_570,&DAT_0011b037,1);
  _ZN12clap_builder7builder3arg3Arg5short17h36512b2e98c7e56dE(auStack_ab8,local_570,0x69);
  _ZN12clap_builder7builder3arg3Arg4long17h34288add47d990b2E
            (local_570,auStack_ab8,&DAT_0011b22c,0xb);
                    /* try { // try from 0016e2bc to 0016e2d2 has its CatchHandler @ 0016e9b9 */
  _ZN12clap_builder7builder3arg3Arg4help17h10b3faf2bc03bd5cE
            (auStack_ab8,local_570,&DAT_0011b237,0x30);
  _ZN12clap_builder7builder3arg3Arg6action17h8908cb4a12e2a288E(&local_2a8,auStack_ab8,2);
  _ZN12clap_builder7builder7command7Command3arg17hb993b0b5afd8ecadE(local_570,local_838,&local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h4235f5218f32fea7E(local_838,&DAT_0011b034,1);
  _ZN12clap_builder7builder3arg3Arg5short17h36512b2e98c7e56dE(auStack_ab8,local_838,0x6a);
                    /* try { // try from 0016e332 to 0016e369 has its CatchHandler @ 0016ea43 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h017f8a4149966e60E
            (local_838,auStack_ab8,&DAT_0011b267,5);
  _ZN12clap_builder7builder3arg3Arg4help17h10b3faf2bc03bd5cE
            (auStack_ab8,local_838,&DAT_0011b26c,0x21);
  _ZN12clap_builder7builder7command7Command3arg17hb993b0b5afd8ecadE(local_838,local_570,auStack_ab8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h4235f5218f32fea7E(local_570,&DAT_0011b039,1);
  _ZN12clap_builder7builder3arg3Arg5short17h36512b2e98c7e56dE(auStack_ab8,local_570,0x6f);
                    /* try { // try from 0016e3b1 to 0016e3e8 has its CatchHandler @ 0016ea31 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h017f8a4149966e60E
            (local_570,auStack_ab8,&DAT_0011b28d,6);
  _ZN12clap_builder7builder3arg3Arg4help17h10b3faf2bc03bd5cE
            (auStack_ab8,local_570,&DAT_0011b293,0x2a);
  _ZN12clap_builder7builder7command7Command3arg17hb993b0b5afd8ecadE(local_570,local_838,auStack_ab8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h4235f5218f32fea7E(local_838,&DAT_0011b038,1);
  _ZN12clap_builder7builder3arg3Arg5short17h36512b2e98c7e56dE(auStack_ab8,local_838,0x74);
                    /* try { // try from 0016e430 to 0016e48b has its CatchHandler @ 0016ea67 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h017f8a4149966e60E
            (local_838,auStack_ab8,&DAT_001191cc,4);
  local_2a8 = (undefined *)0x2;
  _ZN12clap_builder7builder3arg3Arg12value_parser17hddefc057e53b7caeE
            (auStack_ab8,local_838,&local_2a8);
  _ZN12clap_builder7builder3arg3Arg4help17h10b3faf2bc03bd5cE
            (&local_2a8,auStack_ab8,&DAT_0011b2bd,0x2c);
  _ZN12clap_builder7builder7command7Command3arg17hb993b0b5afd8ecadE(local_838,local_570,&local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h4235f5218f32fea7E(local_570,&DAT_0011b035,1);
  _ZN12clap_builder7builder3arg3Arg5short17h36512b2e98c7e56dE(auStack_ab8,local_570,0x31);
                    /* try { // try from 0016e4d8 to 0016e50f has its CatchHandler @ 0016ea1f */
  _ZN12clap_builder7builder3arg3Arg10value_name17h017f8a4149966e60E
            (local_570,auStack_ab8,&DAT_0011b267,5);
  _ZN12clap_builder7builder3arg3Arg4help17h10b3faf2bc03bd5cE
            (auStack_ab8,local_570,&DAT_0011b2e9,0x1c);
  _ZN12clap_builder7builder7command7Command3arg17hb993b0b5afd8ecadE(local_570,local_838,auStack_ab8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h4235f5218f32fea7E(local_838,&DAT_0011b036,1);
  _ZN12clap_builder7builder3arg3Arg5short17h36512b2e98c7e56dE(auStack_ab8,local_838,0x32);
                    /* try { // try from 0016e557 to 0016e58e has its CatchHandler @ 0016ea0d */
  _ZN12clap_builder7builder3arg3Arg10value_name17h017f8a4149966e60E
            (local_838,auStack_ab8,&DAT_0011b267,5);
  _ZN12clap_builder7builder3arg3Arg4help17h10b3faf2bc03bd5cE
            (auStack_ab8,local_838,&DAT_0011b305,0x1c);
  _ZN12clap_builder7builder7command7Command3arg17hb993b0b5afd8ecadE(local_838,local_570,auStack_ab8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h4235f5218f32fea7E(local_570,&DAT_0011b048,0xb);
  _ZN12clap_builder7builder3arg3Arg4long17h34288add47d990b2E
            (auStack_ab8,local_570,&DAT_0011b048,0xb);
                    /* try { // try from 0016e5dc to 0016e5f7 has its CatchHandler @ 0016e9a4 */
  _ZN12clap_builder7builder3arg3Arg4help17h10b3faf2bc03bd5cE
            (local_570,auStack_ab8,&DAT_0011b321,0x4e);
  _ZN12clap_builder7builder3arg3Arg6action17h8908cb4a12e2a288E(auStack_ab8,local_570,2);
  _ZN12clap_builder7builder7command7Command3arg17hb993b0b5afd8ecadE(local_570,local_838,auStack_ab8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h4235f5218f32fea7E(local_838,&DAT_0011b03b,0xd);
  _ZN12clap_builder7builder3arg3Arg4long17h34288add47d990b2E
            (auStack_ab8,local_838,&DAT_0011b03b,0xd);
                    /* try { // try from 0016e65d to 0016e678 has its CatchHandler @ 0016e98f */
  _ZN12clap_builder7builder3arg3Arg4help17h10b3faf2bc03bd5cE
            (local_838,auStack_ab8,&DAT_0011b36f,0x2f);
  _ZN12clap_builder7builder3arg3Arg6action17h8908cb4a12e2a288E(auStack_ab8,local_838,2);
  _ZN12clap_builder7builder7command7Command3arg17hb993b0b5afd8ecadE(local_838,local_570,auStack_ab8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h4235f5218f32fea7E(local_570,&DAT_0011b053,6);
  _ZN12clap_builder7builder3arg3Arg4long17h34288add47d990b2E(auStack_ab8,local_570,&DAT_0011b053,6);
                    /* try { // try from 0016e6de to 0016e6f9 has its CatchHandler @ 0016e97a */
  _ZN12clap_builder7builder3arg3Arg4help17h10b3faf2bc03bd5cE
            (local_570,auStack_ab8,&DAT_0011b39e,0x5a);
  _ZN12clap_builder7builder3arg3Arg6action17h8908cb4a12e2a288E(auStack_ab8,local_570,2);
  _ZN12clap_builder7builder7command7Command3arg17hb993b0b5afd8ecadE(local_570,local_838,auStack_ab8)
  ;
  _ZN12clap_builder7builder3arg3Arg3new17h4235f5218f32fea7E(local_838,&DAT_0011b059,1);
  _ZN12clap_builder7builder3arg3Arg5short17h36512b2e98c7e56dE(auStack_ab8,local_838,0x7a);
  _ZN12clap_builder7builder3arg3Arg4long17h34288add47d990b2E
            (local_838,auStack_ab8,&DAT_0011b3f8,0xf);
                    /* try { // try from 0016e778 to 0016e78e has its CatchHandler @ 0016e965 */
  _ZN12clap_builder7builder3arg3Arg4help17h10b3faf2bc03bd5cE
            (auStack_ab8,local_838,&DAT_0011b407,0x22);
  _ZN12clap_builder7builder3arg3Arg6action17h8908cb4a12e2a288E(&local_2a8,auStack_ab8,2);
  _ZN12clap_builder7builder7command7Command3arg17hb993b0b5afd8ecadE(local_838,local_570,&local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h4235f5218f32fea7E(local_570,&DAT_0011b429,5);
  (*(code *)PTR_memcpy_00204da0)(auStack_ab8,local_570,0x278);
  local_840 = local_2f8 | 1;
  local_83c = local_2f4;
                    /* try { // try from 0016e80e to 0016e839 has its CatchHandler @ 0016e9f8 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h017f8a4149966e60E
            (local_570,auStack_ab8,&DAT_0011b42e,5);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h13c4d91d7ca681c3E(auStack_ab8,local_570);
  puVar1 = PTR_memcpy_00204da0;
  (*(code *)PTR_memcpy_00204da0)(&local_2a8,auStack_ab8,0x278);
  local_30 = local_840 | 4;
  local_2c = local_83c;
  _ZN12clap_builder7builder7command7Command3arg17hb993b0b5afd8ecadE(local_570,local_838,&local_2a8);
  _ZN12clap_builder7builder3arg3Arg3new17h4235f5218f32fea7E(local_838,&DAT_0011b433,5);
  (*(code *)puVar1)(auStack_ab8,local_838,0x278);
  local_840 = local_5c0 | 1;
  local_83c = local_5bc;
                    /* try { // try from 0016e8da to 0016e905 has its CatchHandler @ 0016e9e3 */
  _ZN12clap_builder7builder3arg3Arg10value_name17h017f8a4149966e60E
            (local_838,auStack_ab8,&DAT_0011b438,5);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h13c4d91d7ca681c3E(auStack_ab8,local_838);
  (*(code *)PTR_memcpy_00204da0)(local_838,auStack_ab8,0x278);
  local_5c0 = local_840 | 4;
  local_5bc = local_83c;
  _ZN12clap_builder7builder7command7Command3arg17hb993b0b5afd8ecadE(param_1,local_570,local_838);
  return param_1;
}