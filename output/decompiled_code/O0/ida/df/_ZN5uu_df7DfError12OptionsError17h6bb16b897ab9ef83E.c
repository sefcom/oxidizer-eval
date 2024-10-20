_QWORD *__fastcall uu_df::DfError::OptionsError(_QWORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax

  result = a1;
  *a1 = *a2;
  a1[1] = a2[1];
  a1[2] = a2[2];
  a1[3] = a2[3];
  return result;
}
