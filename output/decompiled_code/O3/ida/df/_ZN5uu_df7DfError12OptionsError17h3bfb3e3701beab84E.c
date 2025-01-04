void __fastcall uu_df::DfError::OptionsError(_OWORD *a1, __int128 *a2)
{
  __int128 v2; // xmm0

  v2 = *a2;
  a1[1] = a2[1];
  *a1 = v2;
}
