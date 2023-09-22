$i = 1

Get-ChildItem -Path "enter path name" | ForEach-Object {
   Rename-Item $_ -NewName "File$i.docx"
   $i++
}
