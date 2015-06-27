using System.Reflection;
using System.Security;
using System.Runtime.CompilerServices;

// General Information about an assembly is controlled through the following
// set of attributes. Change these attribute values to modify the information
// associated with an assembly.

[assembly: AssemblyTitle("Ionic's Managed Zlib")]

#if DEBUG
[assembly: AssemblyConfiguration("Debug")]
[assembly: AssemblyDescription("library for Deflate and ZLIB compression. http://www.codeplex.com/DotNetZip (Flavor=Debug)")]
#else
[assembly: AssemblyConfiguration("Retail")]
[assembly: AssemblyDescription("library for Deflate and ZLIB compression. http://www.codeplex.com/DotNetZip (Flavor=Retail)")]
#endif

[assembly: AssemblyCompany("Dino Chiesa")]
[assembly: AssemblyProduct("DotNetZip Library")]
[assembly: AssemblyCopyright("Copyright © Dino Chiesa 2006 - 2011")]
[assembly: AssemblyTrademark("")]
[assembly: AssemblyCulture("")]

[assembly: AssemblyVersion("1.9.1.8")]
[assembly: AssemblyFileVersion("1.9.1.8")]
[assembly: AllowPartiallyTrustedCallers]
[assembly: System.CLSCompliant(false)]