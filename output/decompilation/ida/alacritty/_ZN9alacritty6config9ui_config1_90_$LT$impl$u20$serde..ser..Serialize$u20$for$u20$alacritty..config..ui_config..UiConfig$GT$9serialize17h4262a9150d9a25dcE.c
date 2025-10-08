__int64 __fastcall alacritty::config::ui_config::_::<impl serde::ser::Serialize for alacritty::config::ui_config::UiConfig>::serialize(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // [rsp+8h] [rbp-20h] BYREF
  unsigned int v4; // [rsp+10h] [rbp-18h]

  <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_struct(&v3, a2, 19LL);
  result = (__int64)v3;
  if ( (_BYTE)v4 != 3 )
  {
    result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, a1 + 16);
    if ( !result )
    {
      result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, a1 + 992);
      if ( !result )
      {
        result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                   &v3,
                   *(unsigned int *)(a1 + 1040),
                   *(unsigned int *)(a1 + 1044));
        if ( !result )
        {
          result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, a1 + 968);
          if ( !result )
          {
            result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, a1 + 72);
            if ( !result )
            {
              result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, a1 + 104);
              if ( !result )
              {
                result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, a1 + 312);
                if ( !result )
                {
                  result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                             &v3,
                             *(unsigned int *)(a1 + 464));
                  if ( !result )
                  {
                    result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, a1);
                    if ( !result )
                    {
                      result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                                 &v3,
                                 a1 + 808);
                      if ( !result )
                      {
                        result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                                   &v3,
                                   a1 + 472);
                        if ( !result )
                        {
                          result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                                     &v3,
                                     a1 + 688);
                          if ( !result )
                          {
                            result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                                       &v3,
                                       a1 + 864);
                            if ( !result )
                            {
                              result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3);
                              if ( !result )
                              {
                                result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                                           &v3,
                                           aShell,
                                           5LL,
                                           a1 + 920);
                                if ( !result )
                                {
                                  result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                                             &v3,
                                             a1 + 760);
                                  if ( !result )
                                  {
                                    result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                                               &v3,
                                               a1 + 784);
                                    if ( !result )
                                    {
                                      <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                                        &v3,
                                        aLiveConfigRelo,
                                        18LL,
                                        *(unsigned int *)(a1 + 1048));
                                      <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                                        &v3,
                                        aIpcSocket,
                                        10LL,
                                        *(unsigned __int8 *)(a1 + 1049));
                                      <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::end(*v3, v4);
                                      return 0LL;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}