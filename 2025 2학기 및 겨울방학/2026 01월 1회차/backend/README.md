# 📝 Week 8 – REST API 기초 과제

## 과제 주제

**/todos API 구현 (할 일 목록 JSON 반환, 완료 여부 포함)**

---

## 과제 요구사항

1. **프로그램 구조**

   * **Python + Flask** 또는 **Node.js + Express**를 사용하여 간단한 서버 구현
   * 서버는 로컬 환경에서 실행 가능하도록 설정
   * 프로그램의 흐름은 다음과 같이 구성할 것:

     1. `/todos` 라우트 접속 시 JSON 형식으로 할 일 목록 반환
     2. 각 할 일 항목은 **id, 제목(title), 완료 여부(completed)** 포함

2. **함수/라우트 구조**

   * Flask 예시:

     * `@app.route('/todos')` → JSON 데이터 반환 (`jsonify` 사용)
   * Express 예시:

     * `app.get('/todos', ...)` → JSON 데이터 반환 (`res.json` 사용)
   * 데이터 예시:

     ```json
     [
       {"id": 1, "title": "과제 제출", "completed": false},
       {"id": 2, "title": "코딩 연습", "completed": true}
     ]
     ```

3. **기능 요구사항**

   * `/todos` 접속 시 **JSON 형식**으로 데이터 반환
   * 완료 여부(`completed`)는 true/false로 표시
   * 서버는 로컬 환경에서 실행 가능하며, 브라우저 또는 Postman에서 접근 가능
   * 불필요한 외부 API나 유료 기능 사용 금지
