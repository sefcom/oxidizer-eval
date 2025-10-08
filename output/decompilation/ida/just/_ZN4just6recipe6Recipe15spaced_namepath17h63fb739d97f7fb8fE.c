__int64 __fastcall just::recipe::Recipe::spaced_namepath(int a1, __int64 a2)
{
  int v2; // eax
  int v3; // edx

  v2 = just::recipe::Recipe::namepath(a2);
  return alloc::str::<impl str>::replace(a1, v2, v3, (unsigned int)asc_6E4EE, 2, (unsigned int)asc_6E4F0, 1LL);
}