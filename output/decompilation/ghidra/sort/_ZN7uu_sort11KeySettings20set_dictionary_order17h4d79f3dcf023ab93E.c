void _ZN7uu_sort11KeySettings20set_dictionary_order17h4d79f3dcf023ab93E(long *param_1,long param_2)

{
  long local_30;
  long lStack_28;
  long local_20;
  
  _ZN7uu_sort11KeySettings19check_compatibility17hd03ca512104bcd48E
            (&local_30,*(undefined *)(param_2 + 5),*(undefined *)(param_2 + 3),1);
  if (local_30 == -0x8000000000000000) {
    *(undefined *)(param_2 + 2) = 1;
    *param_1 = -0x8000000000000000;
  }
  else {
    param_1[2] = local_20;
    *param_1 = local_30;
    param_1[1] = lStack_28;
  }
  return;
}