@echo off
cd /d "%~dp0"
git add .
git commit -m "💻 실습 코드 업데이트"
git push origin main
pause
