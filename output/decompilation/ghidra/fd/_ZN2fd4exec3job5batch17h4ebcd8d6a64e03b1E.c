void _ZN2fd4exec3job5batch17h4ebcd8d6a64e03b1E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined local_d0 [80];
  undefined local_80 [88];
  
  _ZN63__LT_I_u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17he05ad75fcea55ffbE
            (local_d0,param_1);
  _ZN4core4iter6traits8iterator8Iterator10filter_map17hbc857f8ae2340044E(local_80,local_d0,param_4);
  _ZN2fd4exec10CommandSet13execute_batch17h9ec3434f1d6afbcaE
            (param_2,param_3,local_80,*(undefined8 *)(param_4 + 0x1d0),
             *(undefined8 *)(param_4 + 0x170),*(undefined8 *)(param_4 + 0x178));
  return;
}