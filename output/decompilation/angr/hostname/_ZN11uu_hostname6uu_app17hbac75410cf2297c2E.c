long long uu_hostname::uu_app(unsigned long a0)
{
    unsigned long long v0;  // [bp-0x888]
    unsigned long long v1;  // [bp-0x880]
    unsigned long long v2;  // [bp-0x878]
    unsigned long long v3;  // [bp-0x870]
    unsigned long long v4;  // [bp-0x868]
    unsigned long long v5;  // [bp-0x860]
    unsigned long long v6;  // [bp-0x858]
    unsigned long long v7;  // [bp-0x850]
    unsigned long long v8;  // [bp-0x848]
    char v9;  // [bp-0x840]
    unsigned long long v10;  // [bp-0x584]
    unsigned int v11;  // [bp-0x57c]
    char v12;  // [bp-0x578]
    char v13;  // [bp-0x2f8]
    unsigned long v14;  // [bp-0x3c]
    char v15;  // [bp-0x34]
    unsigned long long v18;  // rdx

    v9.new(uucore::util_name(), v18);
    v13.version(&v9);
    v9.about(&v13);
    uucore::format_usage(&v12, "{} [OPTION]... [HOSTNAME]Display the name of the DNS domain if possibleDisplay the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Display the short hostname (the portion before the first dot) if possible:1\nsrc/uu/hos", 25);
    v13.override_usage(&v9, &v12);
    memcpy(&v9, &v13, 700);
    v10 = 549755814016 | v14;
    v11 = *((int *)&v15);
    v13.new("domainip-addressshort(uutils coreutils) 0.0.30Display or set the system's host name.{} [OPTION]... [HOSTNAME]Display the name of the DNS domain if possibleDisplay the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Di", 6);
    v12.short(&v13, 100);
    v13.long(&v12, "domainip-addressshort(uutils coreutils) 0.0.30Display or set the system's host name.{} [OPTION]... [HOSTNAME]Display the name of the DNS domain if possibleDisplay the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Di", 6);
    v0 = "domainip-addressshort(uutils coreutils) 0.0.30Display or set the system's host name.{} [OPTION]... [HOSTNAME]Display the name of the DNS domain if possibleDisplay the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Di";
    v1 = 6;
    v2 = "ip-addressshort(uutils coreutils) 0.0.30Display or set the system's host name.{} [OPTION]... [HOSTNAME]Display the name of the DNS domain if possibleDisplay the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Display ";
    v3 = 10;
    v4 = "fqdn -> ";
    v5 = 4;
    v6 = "short(uutils coreutils) 0.0.30Display or set the system's host name.{} [OPTION]... [HOSTNAME]Display the name of the DNS domain if possibleDisplay the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Display the short ";
    v7 = 5;
    v12.overrides_with_all(&v13, &v0);
    v13.help(&v12, "Display the name of the DNS domain if possibleDisplay the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Display the short hostname (the portion before the first dot) if possible:1\nsrc/uu/hostname/src/hostname.rs", 46);
    v12.action(&v13);
    v13.arg(&v9, &v12);
    v9.new("ip-addressshort(uutils coreutils) 0.0.30Display or set the system's host name.{} [OPTION]... [HOSTNAME]Display the name of the DNS domain if possibleDisplay the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Display ", 10);
    v12.short(&v9, 105);
    v9.long(&v12, "ip-addressshort(uutils coreutils) 0.0.30Display or set the system's host name.{} [OPTION]... [HOSTNAME]Display the name of the DNS domain if possibleDisplay the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Display ", 10);
    v0 = "domainip-addressshort(uutils coreutils) 0.0.30Display or set the system's host name.{} [OPTION]... [HOSTNAME]Display the name of the DNS domain if possibleDisplay the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Di";
    v1 = 6;
    v2 = "ip-addressshort(uutils coreutils) 0.0.30Display or set the system's host name.{} [OPTION]... [HOSTNAME]Display the name of the DNS domain if possibleDisplay the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Display ";
    v3 = 10;
    v4 = "fqdn -> ";
    v5 = 4;
    v6 = "short(uutils coreutils) 0.0.30Display or set the system's host name.{} [OPTION]... [HOSTNAME]Display the name of the DNS domain if possibleDisplay the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Display the short ";
    v7 = 5;
    v12.overrides_with_all(&v9, &v0);
    v9.help(&v12, "Display the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Display the short hostname (the portion before the first dot) if possible:1\nsrc/uu/hostname/src/hostname.rs", 43);
    v12.action(&v9);
    v9.arg(&v13, &v12);
    v13.new("fqdn -> ", 4);
    v12.short(&v13, 102);
    v13.long(&v12, "fqdn -> ", 4);
    v0 = "domainip-addressshort(uutils coreutils) 0.0.30Display or set the system's host name.{} [OPTION]... [HOSTNAME]Display the name of the DNS domain if possibleDisplay the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Di";
    v1 = 6;
    v2 = "ip-addressshort(uutils coreutils) 0.0.30Display or set the system's host name.{} [OPTION]... [HOSTNAME]Display the name of the DNS domain if possibleDisplay the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Display ";
    v3 = 10;
    v4 = "fqdn -> ";
    v5 = 4;
    v6 = "short(uutils coreutils) 0.0.30Display or set the system's host name.{} [OPTION]... [HOSTNAME]Display the name of the DNS domain if possibleDisplay the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Display the short ";
    v7 = 5;
    v12.overrides_with_all(&v13, &v0);
    v13.help(&v12, "Display the FQDN (Fully Qualified Domain Name) (default)Display the short hostname (the portion before the first dot) if possible:1\nsrc/uu/hostname/src/hostname.rs", 56);
    v12.action(&v13);
    v13.arg(&v9, &v12);
    v9.new("short(uutils coreutils) 0.0.30Display or set the system's host name.{} [OPTION]... [HOSTNAME]Display the name of the DNS domain if possibleDisplay the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Display the short ", 5);
    v12.short(&v9, 115);
    v9.long(&v12, "short(uutils coreutils) 0.0.30Display or set the system's host name.{} [OPTION]... [HOSTNAME]Display the name of the DNS domain if possibleDisplay the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Display the short ", 5);
    v0 = "domainip-addressshort(uutils coreutils) 0.0.30Display or set the system's host name.{} [OPTION]... [HOSTNAME]Display the name of the DNS domain if possibleDisplay the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Di";
    v1 = 6;
    v2 = "ip-addressshort(uutils coreutils) 0.0.30Display or set the system's host name.{} [OPTION]... [HOSTNAME]Display the name of the DNS domain if possibleDisplay the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Display ";
    v3 = 10;
    v4 = "fqdn -> ";
    v5 = 4;
    v6 = "short(uutils coreutils) 0.0.30Display or set the system's host name.{} [OPTION]... [HOSTNAME]Display the name of the DNS domain if possibleDisplay the network address(es) of the hostDisplay the FQDN (Fully Qualified Domain Name) (default)Display the short ";
    v7 = 5;
    v12.overrides_with_all(&v9, &v0);
    v9.help(&v12, "Display the short hostname (the portion before the first dot) if possible:1\nsrc/uu/hostname/src/hostname.rs", 73);
    v12.action(&v9);
    v9.arg(&v13, &v12);
    v13.new("host", 4);
    v0 = 2;
    v12.value_parser(&v13, &v0);
    v13.value_hint(&v12);
    v8.arg(&v9, &v13);
    return a0;
}
