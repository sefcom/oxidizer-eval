__int128 *__fastcall sniffnet::notifications::types::logged_notification::LoggedNotification::data_info(
        _OWORD *a1,
        _QWORD *a2)
{
  __int128 *result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2

  result = (__int128 *)(a2 + 12);
  if ( __OFSUB__(0LL, *a2) )
    result = (__int128 *)(a2 + 2);
  a1[4] = result[4];
  v3 = *result;
  v4 = result[1];
  v5 = result[2];
  a1[3] = result[3];
  a1[2] = v5;
  a1[1] = v4;
  *a1 = v3;
  return result;
}