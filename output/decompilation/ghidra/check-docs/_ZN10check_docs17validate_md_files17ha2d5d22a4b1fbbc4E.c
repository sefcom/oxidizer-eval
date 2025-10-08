undefined8
_ZN10check_docs17validate_md_files17ha2d5d22a4b1fbbc4E
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_58 [48];
  undefined2 local_28;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
            (local_58,*(undefined8 *)(param_3 + 8),uVar1);
  local_68 = 0;
  local_28 = 0;
                    /* try { // try from 001eda53 to 001eda5f has its CatchHandler @ 001eda7f */
  local_70 = param_2;
  local_60 = uVar1;
  _ZN4core4iter6traits8iterator8Iterator7collect17h49a2701d782b822bE(param_1,&local_70);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfaeafffef128df0dE(param_3);
  _ZN4core3ptr83drop_in_place_LT_std__collections__hash__set__HashSet_LT_std__path__PathBuf_GT__GT_17h1dadcf951b1db9c1E
            (param_2);
  return param_1;
}