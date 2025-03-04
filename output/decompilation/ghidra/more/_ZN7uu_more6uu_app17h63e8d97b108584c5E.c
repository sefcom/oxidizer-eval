undefined8 _ZN7uu_more6uu_app17h63e8d97b108584c5E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auStack_a48 [584];
  uint local_800;
  undefined4 local_7fc;
  undefined local_7f8 [584];
  uint local_5b0;
  undefined4 local_5ac;
  ulong local_53c;
  undefined4 local_534;
  undefined local_530 [700];
  ulong local_274;
  undefined4 local_26c;
  undefined8 local_268;
  undefined8 local_260;
  undefined *local_258;
  uint local_20;
  undefined4 local_1c;
  
  uVar1 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  _ZN12clap_builder7builder7command7Command3new17h4cd9e3569d13970eE(local_7f8,uVar1);
  _ZN12clap_builder7builder7command7Command5about17h9ff2bbb321d67a8dE
            (local_530,local_7f8,&DAT_00118c18,0x23);
                    /* try { // try from 001dc2e4 to 001dc2f8 has its CatchHandler @ 001dcacb */
  _ZN6uucore12format_usage17h76fcb2d15fbabc58E(auStack_a48,&DAT_00118c3b,0x14);
  _ZN12clap_builder7builder7command7Command14override_usage17h47a621d79ce17eabE
            (local_7f8,local_530,auStack_a48);
  _ZN12clap_builder7builder7command7Command7version17h24b63b7e8d28daa3E
            (local_530,local_7f8,&DAT_00118c4f,6);
  (*(code *)PTR_memcpy_00267aa8)(local_7f8,local_530,700);
  local_53c = local_274 | 0x8000000080;
  local_534 = local_26c;
                    /* try { // try from 001dc371 to 001dc3d9 has its CatchHandler @ 001dcb6a */
  _ZN12clap_builder7builder3arg3Arg3new17h96a7073f8f8824a0E(local_530,&DAT_00118c01,10);
  _ZN12clap_builder7builder3arg3Arg5short17h97a1ce4c8b6bf8e1E(auStack_a48,local_530,99);
  _ZN12clap_builder7builder3arg3Arg4long17h12f0ba76cb7eb328E(local_530,auStack_a48,&DAT_00118c01,10)
  ;
  _ZN12clap_builder7builder3arg3Arg4help17h94ea6279b4aa990dE
            (auStack_a48,local_530,&DAT_00118c55,0x2f);
  _ZN12clap_builder7builder3arg3Arg6action17h4bee5205dd7d4073E(&local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h27b36f6dc0b01fdcE(local_530,local_7f8,&local_268);
                    /* try { // try from 001dc40a to 001dc472 has its CatchHandler @ 001dcb58 */
  _ZN12clap_builder7builder3arg3Arg3new17h96a7073f8f8824a0E(local_7f8,&DAT_00118c0b,6);
  _ZN12clap_builder7builder3arg3Arg5short17h97a1ce4c8b6bf8e1E(auStack_a48,local_7f8,100);
  _ZN12clap_builder7builder3arg3Arg4long17h12f0ba76cb7eb328E(local_7f8,auStack_a48,&DAT_00118c0b,6);
  _ZN12clap_builder7builder3arg3Arg4help17h94ea6279b4aa990dE
            (auStack_a48,local_7f8,&DAT_00118c84,0x24);
  _ZN12clap_builder7builder3arg3Arg6action17h4bee5205dd7d4073E(&local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h27b36f6dc0b01fdcE(local_7f8,local_530,&local_268);
                    /* try { // try from 001dc4a3 to 001dc50b has its CatchHandler @ 001dcb46 */
  _ZN12clap_builder7builder3arg3Arg3new17h96a7073f8f8824a0E(local_530,&DAT_00118bf6,0xb);
  _ZN12clap_builder7builder3arg3Arg5short17h97a1ce4c8b6bf8e1E(auStack_a48,local_530,0x70);
  _ZN12clap_builder7builder3arg3Arg4long17h12f0ba76cb7eb328E
            (local_530,auStack_a48,&DAT_00118bf6,0xb);
  _ZN12clap_builder7builder3arg3Arg4help17h94ea6279b4aa990dE
            (auStack_a48,local_530,&DAT_00118ca8,0x2c);
  _ZN12clap_builder7builder3arg3Arg6action17h4bee5205dd7d4073E(&local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h27b36f6dc0b01fdcE(local_530,local_7f8,&local_268);
                    /* try { // try from 001dc53c to 001dc5a4 has its CatchHandler @ 001dcb34 */
  _ZN12clap_builder7builder3arg3Arg3new17h96a7073f8f8824a0E(local_7f8,&DAT_00118c11,7);
  _ZN12clap_builder7builder3arg3Arg5short17h97a1ce4c8b6bf8e1E(auStack_a48,local_7f8,0x73);
  _ZN12clap_builder7builder3arg3Arg4long17h12f0ba76cb7eb328E(local_7f8,auStack_a48,&DAT_00118c11,7);
  _ZN12clap_builder7builder3arg3Arg4help17h94ea6279b4aa990dE
            (auStack_a48,local_7f8,&DAT_00118cd4,0x25);
  _ZN12clap_builder7builder3arg3Arg6action17h4bee5205dd7d4073E(&local_268,auStack_a48,2);
  _ZN12clap_builder7builder7command7Command3arg17h27b36f6dc0b01fdcE(local_7f8,local_530,&local_268);
                    /* try { // try from 001dc5d5 to 001dc621 has its CatchHandler @ 001dcb0a */
  _ZN12clap_builder7builder3arg3Arg3new17h96a7073f8f8824a0E(local_530,&DAT_00118cf9,5);
  _ZN12clap_builder7builder3arg3Arg5short17h97a1ce4c8b6bf8e1E(auStack_a48,local_530,0x75);
  _ZN12clap_builder7builder3arg3Arg4long17h12f0ba76cb7eb328E(local_530,auStack_a48,&DAT_00118cf9,5);
  _ZN12clap_builder7builder3arg3Arg6action17h4bee5205dd7d4073E(auStack_a48,local_530,2);
  (*(code *)PTR_memcpy_00267aa8)(&local_268,auStack_a48,0x248);
  local_20 = local_800 | 4;
  local_1c = local_7fc;
  _ZN12clap_builder7builder7command7Command3arg17h27b36f6dc0b01fdcE(local_530,local_7f8,&local_268);
                    /* try { // try from 001dc68a to 001dc6d6 has its CatchHandler @ 001dcb8e */
  _ZN12clap_builder7builder3arg3Arg3new17h96a7073f8f8824a0E(local_7f8,&DAT_00118bef,7);
  _ZN12clap_builder7builder3arg3Arg5short17h97a1ce4c8b6bf8e1E(auStack_a48,local_7f8,0x50);
  _ZN12clap_builder7builder3arg3Arg4long17h12f0ba76cb7eb328E(local_7f8,auStack_a48,&DAT_00118bef,7);
  (*(code *)PTR_memcpy_00267aa8)(auStack_a48,local_7f8,0x248);
  local_800 = local_5b0 & 0xffffffde | 0x20;
  local_7fc = local_5ac;
                    /* try { // try from 001dc712 to 001dc749 has its CatchHandler @ 001dcb8e */
  _ZN12clap_builder7builder3arg3Arg10value_name17hd3aae3acca850dc6E
            (local_7f8,auStack_a48,&DAT_00118bef,7);
  _ZN12clap_builder7builder3arg3Arg4help17h94ea6279b4aa990dE
            (auStack_a48,local_7f8,&DAT_00118cfe,0x29);
  _ZN12clap_builder7builder7command7Command3arg17h27b36f6dc0b01fdcE(local_7f8,local_530,auStack_a48)
  ;
                    /* try { // try from 001dc762 to 001dc7da has its CatchHandler @ 001dcbb2 */
  _ZN12clap_builder7builder3arg3Arg3new17h96a7073f8f8824a0E(local_530,&DAT_00118be6,9);
  _ZN12clap_builder7builder3arg3Arg5short17h97a1ce4c8b6bf8e1E(auStack_a48,local_530,0x46);
  _ZN12clap_builder7builder3arg3Arg4long17h12f0ba76cb7eb328E(local_530,auStack_a48,&DAT_00118be6,9);
  _ZN12clap_builder7builder3arg3Arg8num_args17hab109f783006334eE(auStack_a48,local_530);
  _ZN12clap_builder7builder3arg3Arg10value_name17hd3aae3acca850dc6E
            (local_530,auStack_a48,&DAT_00118be0,6);
                    /* try { // try from 001dc7db to 001dc7df has its CatchHandler @ 001dcab6 */
  local_260 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hfae2bfb329dafdabE();
  local_268 = 4;
  local_258 = &DAT_002628d0;
                    /* try { // try from 001dc803 to 001dc81a has its CatchHandler @ 001dcab1 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17h875608cf92624eedE
            (auStack_a48,local_530,&local_268);
                    /* try { // try from 001dc81b to 001dc836 has its CatchHandler @ 001dcbb2 */
  _ZN12clap_builder7builder3arg3Arg4help17h94ea6279b4aa990dE
            (&local_268,auStack_a48,&DAT_00118d27,0x27);
  _ZN12clap_builder7builder7command7Command3arg17h27b36f6dc0b01fdcE(local_530,local_7f8,&local_268);
                    /* try { // try from 001dc854 to 001dc8cc has its CatchHandler @ 001dcba0 */
  _ZN12clap_builder7builder3arg3Arg3new17h96a7073f8f8824a0E(local_7f8,&DAT_00118bdb,5);
  _ZN12clap_builder7builder3arg3Arg5short17h97a1ce4c8b6bf8e1E(auStack_a48,local_7f8,0x6e);
  _ZN12clap_builder7builder3arg3Arg4long17h12f0ba76cb7eb328E(local_7f8,auStack_a48,&DAT_00118bdb,5);
  _ZN12clap_builder7builder3arg3Arg10value_name17hd3aae3acca850dc6E
            (auStack_a48,local_7f8,&DAT_00118be0,6);
  _ZN12clap_builder7builder3arg3Arg8num_args17hab109f783006334eE(local_7f8,auStack_a48);
                    /* try { // try from 001dc8cd to 001dc8e7 has its CatchHandler @ 001dcaf5 */
  _ZN79__LT_u16_u20_as_u20_clap_builder__builder__value_parser__ValueParserFactory_GT_12value_parser17h14857a0c9fe853b0E
            (auStack_a48);
  _ZN12clap_builder7builder12value_parser29RangedI64ValueParser_LT_T_GT_5range17h9002732387942f74E
            (&local_268,auStack_a48,0);
                    /* try { // try from 001dc8e8 to 001dc8ff has its CatchHandler @ 001dcaac */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hf8e0a5c2eae1e03cE
            (auStack_a48,local_7f8,&local_268);
                    /* try { // try from 001dc900 to 001dc91b has its CatchHandler @ 001dcba0 */
  _ZN12clap_builder7builder3arg3Arg4help17h94ea6279b4aa990dE
            (&local_268,auStack_a48,&DAT_00118d4e,0x23);
  _ZN12clap_builder7builder7command7Command3arg17h27b36f6dc0b01fdcE(local_7f8,local_530,&local_268);
                    /* try { // try from 001dc939 to 001dc97d has its CatchHandler @ 001dcb7c */
  _ZN12clap_builder7builder3arg3Arg3new17h96a7073f8f8824a0E(local_530,&DAT_00118be0,6);
  _ZN12clap_builder7builder3arg3Arg4long17h12f0ba76cb7eb328E(auStack_a48,local_530,&DAT_00118be0,6);
  _ZN12clap_builder7builder3arg3Arg8num_args17hab109f783006334eE(local_530,auStack_a48);
                    /* try { // try from 001dc97e to 001dc998 has its CatchHandler @ 001dcae0 */
  _ZN79__LT_u16_u20_as_u20_clap_builder__builder__value_parser__ValueParserFactory_GT_12value_parser17h14857a0c9fe853b0E
            (auStack_a48);
  _ZN12clap_builder7builder12value_parser29RangedI64ValueParser_LT_T_GT_5range17h9002732387942f74E
            (&local_268,auStack_a48,0);
                    /* try { // try from 001dc999 to 001dc9b0 has its CatchHandler @ 001dcaa7 */
  _ZN12clap_builder7builder3arg3Arg12value_parser17hf8e0a5c2eae1e03cE
            (auStack_a48,local_530,&local_268);
                    /* try { // try from 001dc9b1 to 001dc9cc has its CatchHandler @ 001dcb7c */
  _ZN12clap_builder7builder3arg3Arg4help17h94ea6279b4aa990dE
            (&local_268,auStack_a48,&DAT_00118d71,0xf);
  _ZN12clap_builder7builder7command7Command3arg17h27b36f6dc0b01fdcE(local_530,local_7f8,&local_268);
                    /* try { // try from 001dc9ea to 001dca02 has its CatchHandler @ 001dcb1f */
  _ZN12clap_builder7builder3arg3Arg3new17h96a7073f8f8824a0E(local_7f8,&DAT_00118d80,5);
  (*(code *)PTR_memcpy_00267aa8)(auStack_a48,local_7f8,0x248);
  local_800 = local_5b0 & 0xfffffffe;
  local_7fc = local_5ac;
  _ZN12clap_builder7builder3arg3Arg6action17h4bee5205dd7d4073E(local_7f8,auStack_a48,1);
                    /* try { // try from 001dca53 to 001dca7e has its CatchHandler @ 001dcb1f */
  _ZN12clap_builder7builder3arg3Arg4help17h94ea6279b4aa990dE
            (auStack_a48,local_7f8,&DAT_00118d85,0x1c);
  _ZN12clap_builder7builder3arg3Arg10value_hint17h0d53a1b77a8e0b73E(local_7f8,auStack_a48,3);
  _ZN12clap_builder7builder7command7Command3arg17h27b36f6dc0b01fdcE(param_1,local_530,local_7f8);
  return param_1;
}