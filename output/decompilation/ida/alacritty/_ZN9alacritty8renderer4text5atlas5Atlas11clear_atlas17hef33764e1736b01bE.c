void __fastcall alacritty::renderer::text::atlas::Atlas::clear_atlas(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx

  if ( a2 )
  {
    v3 = 0LL;
    do
    {
      *(_QWORD *)(a1 + v3 + 12) = 0LL;
      *(_DWORD *)(a1 + v3 + 20) = 0;
      v3 += 28LL;
    }
    while ( 28 * a2 != v3 );
  }
  *a3 = 0LL;
}