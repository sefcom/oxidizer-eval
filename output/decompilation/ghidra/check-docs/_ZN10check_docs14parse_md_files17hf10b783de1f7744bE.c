undefined8
_ZN10check_docs14parse_md_files17hf10b783de1f7744bE
          (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined local_78 [48];
  undefined2 local_48;
  undefined local_40 [32];
  
                    /* try { // try from 001ed7ad to 001ed7dc has its CatchHandler @ 001ed85a */
  local_a8 = param_3;
  local_a0 = param_4;
  (*(code *)PTR__ZN5regex5regex6string5Regex3new17hc0aabeb8c92c5bf9E_002fea20)
            (&local_98,"\\((.*\\.md)\\) ",0xc);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h35d8f95db58b79edE(local_40,&local_98,&DAT_002d35d0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
            (local_78,*(undefined8 *)(param_2 + 8),uVar1);
  local_88 = 0;
  local_48 = 0;
                    /* try { // try from 001ed814 to 001ed820 has its CatchHandler @ 001ed845 */
  local_98 = (undefined *)&local_a8;
  local_90 = local_40;
  local_80 = uVar1;
  _ZN4core4iter6traits8iterator8Iterator7collect17h49421b740ee691c8E(param_1,&local_98);
                    /* try { // try from 001ed821 to 001ed82a has its CatchHandler @ 001ed85a */
  _ZN4core3ptr48drop_in_place_LT_regex__regex__string__Regex_GT_17h5096ee0291be299bE(local_40);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfaeafffef128df0dE(param_2);
  return param_1;
}