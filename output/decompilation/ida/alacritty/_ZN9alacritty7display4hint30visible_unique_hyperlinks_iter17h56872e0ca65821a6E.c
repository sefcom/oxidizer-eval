__int64 __fastcall alacritty::display::hint::visible_unique_hyperlinks_iter(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int v3; // r12d
  int v4; // ebp
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 184) - 1LL;
  v3 = ~*(_DWORD *)(a2 + 200);
  v4 = core::cmp::Ord::min((unsigned int)(*(_DWORD *)(a2 + 192) + v3), (unsigned int)(*(_DWORD *)(a2 + 192) - 1));
  result = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(a1 + 72);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 32) = a2 + 40;
  *(_QWORD *)(a1 + 40) = v2;
  *(_DWORD *)(a1 + 48) = v3;
  *(_QWORD *)(a1 + 56) = v2;
  *(_DWORD *)(a1 + 64) = v4;
  return result;
}