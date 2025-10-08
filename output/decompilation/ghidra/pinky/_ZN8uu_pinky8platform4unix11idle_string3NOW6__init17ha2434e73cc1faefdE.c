void _ZN8uu_pinky8platform4unix11idle_string3NOW6__init17ha2434e73cc1faefdE(undefined8 *param_1)

{
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  (*(code *)PTR__ZN4time16offset_date_time14OffsetDateTime9now_local17ha6216f4dd0bbdcbfE_001fff38)
            (&local_18);
  if (uStack_10._3_1_ == '\x01') {
    (*(code *)PTR__ZN4time16offset_date_time14OffsetDateTime7now_utc17hdf28e97aa04c8516E_001fff40)
              (param_1);
    return;
  }
  *param_1 = local_18;
  param_1[1] = CONCAT44(uStack_c,uStack_10);
  return;
}