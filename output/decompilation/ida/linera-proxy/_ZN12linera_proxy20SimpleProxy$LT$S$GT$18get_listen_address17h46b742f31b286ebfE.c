__int64 __fastcall linera_proxy::SimpleProxy<S>::get_listen_address(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = linera_proxy::SimpleProxy<S>::port(a2);
  *(_DWORD *)(a1 + 2) = 0;
  *(_WORD *)(a1 + 6) = result;
  *(_WORD *)a1 = 0;
  return result;
}