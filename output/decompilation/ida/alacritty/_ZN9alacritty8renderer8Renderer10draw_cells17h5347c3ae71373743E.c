void __fastcall __noreturn alacritty::renderer::Renderer::draw_cells(_DWORD *a1, __int64 a2, __int64 a3, __int128 *a4)
{
  _DWORD *v5; // rdi
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v12; // [rsp+0h] [rbp-58h] BYREF
  __int128 v13; // [rsp+10h] [rbp-48h]
  __int128 v14; // [rsp+20h] [rbp-38h]
  __int128 v15; // [rsp+30h] [rbp-28h]
  __int64 v16; // [rsp+40h] [rbp-18h]
  __int64 v17; // [rsp+48h] [rbp-10h]

  v5 = a1 + 2;
  if ( *a1 == 1 )
  {
    v6 = *a4;
    v7 = a4[1];
    v8 = a4[2];
    v15 = a4[3];
    v14 = v8;
    v13 = v7;
    v12 = v6;
    v16 = a3;
    v17 = a2;
    ((void (__fastcall __noreturn *)(_DWORD *, __int128 *, float, float))<alacritty::renderer::text::glsl3::Glsl3Renderer as alacritty::renderer::text::TextRenderer>::with_api)(
      v5,
      &v12,
      *(float *)(a2 + 24),
      *(float *)(a2 + 28));
  }
  v9 = *a4;
  v10 = a4[1];
  v11 = a4[2];
  v15 = a4[3];
  v14 = v11;
  v13 = v10;
  v12 = v9;
  v16 = a3;
  v17 = a2;
  ((void (__fastcall __noreturn *)(_DWORD *, __int128 *))<alacritty::renderer::text::gles2::Gles2Renderer as alacritty::renderer::text::TextRenderer>::with_api)(
    v5,
    &v12);
}